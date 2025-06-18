"""
@file Compiler.py
@brief Compiler and linker utility class for cilibc build system.

This module provides the CCompiler class, which encapsulates logic for compiling
and linking cilibc's CRT objects, main library sources, and test suites. It manages
compiler and linker flags, object file lists, and supports verbose logging via the
BuildContext.
"""
from scripts.BuildContext import BuildContext
from typing import List
from pathlib import Path
import subprocess


class CCompiler:
    """
    CCompiler encapsulates the logic for compiling and linking cilibc sources.

    Attributes:
        CRTFlags (List[str]): Flags for compiling CRT assembly and C files.
        CCFlags (List[str]): Flags for compiling C sources.
        testFlags (List[str]): Flags for compiling test sources.
        appObjects (List[str]): List of application object files to link.
        forcedLinkerFlags (List[str]): Linker flags always applied (may include {{appObjects}} marker).
        linkerFlags (List[str]): User-specified linker flags.
    """

    def __init__(self) -> None:
        """
        Initialize the CCompiler with default flags and empty object lists.
        """
        self.CRTFlags: List[str] = [
            "-c",
            "-O0",
            "-nostdlib",
            "-fno-builtin",
            "-fno-stack-protector",
            "-fno-PIC",
            "-fno-ident",
            "-nostdinc",
            "-fno-asynchronous-unwind-tables",
            "-Wall",
            "-Wextra",
        ]

        self.CCFlags: List[str] = [
            "-c",
            "-O0",
            "-nostdlib",
            "-fno-builtin",
            "-fno-stack-protector",
            "-fno-PIC",
            "-nostdinc",
            "-Wall",
        ]

        self.testFlags: List[str] = [
            "-c",
            "-O0",
            "-nostdlib",
            "-fno-builtin",
            "-fno-stack-protector",
            "-fno-PIC",
            "-nostdinc",
            "-Wall",
        ]

        self.appObjects: List[str] = []

        self.forcedLinkerFlags: List[str] = [
            "-nostdlib",
            "-no-pie",
            "-e",
            "_start",
            "__build/crt/crti.o",
            "__build/crt/crt1.o",
            "__build/crt/crt1_c.o",
            "{{appObjects}}",
            "__build/crt/crtn.o",
        ]

        self.linkerFlags: List[str] = ["-static"]

    def setCCFlags(self, context: BuildContext) -> None:
        """
        Set the C compiler flags from the build context.

        Args:
            context (BuildContext): The build context with compilerFlags.
        """
        if context.compilerFlags is not None:
            self.CCFlags = context.compilerFlags

        if context.verbose:
            context.logger.log(
                "info", f"The compiler flags have been defined as: {self.CCFlags}"
            )

    def setLinkerFlags(self, context: BuildContext) -> None:
        """
        Set the linker flags from the build context.

        Args:
            context (BuildContext): The build context with linkerFlags.
        """
        if context.linkerFlags is not None:
            self.linkerFlags = context.linkerFlags

        if context.verbose:
            context.logger.log(
                "info", f"The linker flags have been defined as: {self.linkerFlags}"
            )

    def compile(self, context: BuildContext) -> None:
        """
        Compile CRT and main cilibc sources.

        Args:
            context (BuildContext): The build context for configuration and logging.
        """
        if context.verbose:
            context.logger.log("info", "Starting the CRT compilation")

        self._compileCRT(context)

        if context.verbose:
            context.logger.log("info", "Finalizing the CRT compilation")

        if context.verbose:
            context.logger.log("info", "Starting the CILibc compilation")

        self._compileCILibc(context)

        if context.verbose:
            context.logger.log("info", "Finalizing the CILibc compilation")

    def _compileCRT(self, context: BuildContext) -> None:
        """
        Compile all CRT assembly (.S) and C (.c) source files.

        - Assembles all .S files in arch/{cpuArch}/crt (recursively) to .o files in __build/crt.
        - Compiles all .c files in src/crt to .o files in __build/crt.

        Args:
            context (BuildContext): The build context for configuration and logging.
        """
        buildDir: Path = Path("__build")
        buildDir.mkdir(exist_ok=True)
        crtDir: Path = buildDir / "crt"
        crtDir.mkdir(exist_ok=True)

        crtAsmDir: Path = Path("arch") / context.cpuArch / "crt"
        asmFiles: List[Path] = list(crtAsmDir.rglob("*.S"))

        outFile: str = None
        cmd: str = None

        for asmFile in asmFiles:
            outFile = crtDir / (asmFile.stem + ".o")
            cmd = ["gcc", *self.CRTFlags, str(asmFile), "-o", str(outFile)]

            if context.verbose:
                context.logger.log("info", f"Compiling {asmFile} -> {outFile}")

            subprocess.run(cmd, check=True)

        crtCDir: Path = Path("src") / "crt"
        cFiles: List[Path] = list(crtCDir.rglob("*.c"))

        for cFile in cFiles:
            outFile = crtDir / (cFile.stem + "_c.o")
            cmd = ["gcc", *self.CRTFlags, str(cFile), "-o", str(outFile)]
            subprocess.run(cmd, check=True)

            if context.verbose:
                context.logger.log("info", f"Compiling {cFile} -> {outFile}")

    def _compileCILibc(self, context: BuildContext) -> None:
        """
        Compile the main cilibc sources (implementation pending).

        Args:
            context (BuildContext): The build context for configuration and logging.
        """
        pass

    def compileTests(self, context: BuildContext) -> None:
        """
        Compile all test source files and test utilities.

        - Compiles all tests/*.c files (utility code) to .o in __build/test with -Itests.
        - For each directory in context.testList, compiles all *.test.c files to .o in __build/test with -Itests.

        Args:
            context (BuildContext): The build context for configuration and logging.
        """
        testBuildDir: Path = Path("__build") / "test"
        testBuildDir.mkdir(parents=True, exist_ok=True)

        testUtilsDir: Path = Path("tests")
        utilFiles: List[Path] = list(testUtilsDir.glob("*.c"))

        utilityObjects: List[Path] = []

        for utilFile in utilFiles:
            outFile = testBuildDir / (utilFile.stem + ".o")
            cmd = [
                context.compiler,
                *self.testFlags,
                "-Iarch",
                "-Itests",
                str(utilFile),
                "-o",
                str(outFile),
            ]
            subprocess.run(cmd, check=True)
            utilityObjects.append(outFile)

            if context.verbose:
                context.logger.log(
                    "info", f"Compiling test utility {utilFile} -> {outFile}"
                )

        testDirs: List[str] = (
            [context.testList]
            if isinstance(context.testList, str)
            else context.testList
        )

        for testDir in testDirs:
            testDirPath: Path = Path("tests") / testDir
            testFiles: List[Path] = list(testDirPath.glob("*.test.c"))

            for testFile in testFiles:
                testObject: Path = testBuildDir / (
                    testFile.stem.replace(".test", "") + ".o"
                )

                cmd = [
                    context.compiler,
                    *self.testFlags,
                    "-Itests",
                    "-Iarch",
                    "-Iinclude",
                    str(testFile),
                    "-o",
                    str(testObject),
                ]
                subprocess.run(cmd, check=True)

                if context.verbose:
                    context.logger.log(
                        "info", f"Compiling test {testFile} -> {testObject}"
                    )

                objectsForLink: List[Path] = utilityObjects + [testObject]

                testOutputBinary: str = str(
                    testBuildDir / testFile.stem.replace(".test", "")
                )
                self.linkTest(context, testOutputBinary, objectsForLink)

    def link(self, context: BuildContext, output: str) -> None:
        """
        Link all compiled object files into a final executable.

        This method constructs the linker command using the compiler and flags
        specified in the build context, as well as the forced linker flags and
        the list of application object files (self.appObjects). The special
        marker '{{appObjects}}' in forcedLinkerFlags is replaced by all object
        files to be linked. The output binary is written to the specified path.

        Args:
            context (BuildContext): The build context with configuration.
            output (str): Output executable path.
        """
        pass

    def linkTest(
        self, context: BuildContext, binName: str, inputFiles: List[Path]
    ) -> None:
        """
        Link test object files into a test binary.

        This method constructs the linker command using the compiler and flags,
        as well as the forced linker flags. The special marker '{{appObjects}}'
        in forcedLinkerFlags is replaced by all object files to be linked.
        The output binary is written to the specified path.

        Args:
            context (BuildContext): The build context with configuration.
            binName (str): Output binary name.
            inputFiles (List[Path]): List of object files to link.
        """
        linker_cmd = [context.compiler]

        for flag in self.forcedLinkerFlags:
            if flag == "{{appObjects}}":
                linker_cmd.extend(str(obj) for obj in self.appObjects)
            else:
                linker_cmd.append(flag)

        linker_cmd.append("-o")
        linker_cmd.append(binName)

        linker_cmd.extend(str(inputFile) for inputFile in inputFiles)

        if context.verbose:
            context.logger.log("info", f"Linking test: {' '.join(linker_cmd)}")

        subprocess.run(linker_cmd, check=True)
