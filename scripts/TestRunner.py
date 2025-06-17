"""
@file TestRunner.py
@brief Test runner for cilibc build system.

This module provides the TestRunner class, which is responsible for compiling,
linking, and executing test suites or individual tests for cilibc. It uses the
CCompiler to build test objects and invokes the corresponding Python test scripts
for result checking and assertions.
"""
from scripts.TestCategories import ValidTestArguments
from scripts.BuildContext import BuildContext
from scripts.Compiler import CCompiler
from typing import List
import subprocess


class TestRunner:
    """
    TestRunner handles the compilation and execution of cilibc tests.

    It can run all test suites or a specific test, compiling the necessary sources
    and invoking the associated Python test scripts for validation. The linking
    phase is handled separately and is not performed in this class.
    """

    def __init__(self) -> None:
        """
        Initialize the TestRunner instance.
        """
        pass

    def run(self, context: BuildContext, cCompiler: CCompiler) -> None:
        """
        Compile and execute the requested tests.

        If context.testList is "all", iterates through all valid test categories,
        compiling and running each one. Otherwise, compiles and runs the specified test.

        Args:
            context (BuildContext): The build context with configuration and test selection.
            cCompiler (CCompiler): The compiler instance to use for building tests.
        """
        if context.testList == "all":
            for vta in ValidTestArguments:
                vta = vta.replace(".", "/")
                context.testList = vta

                cCompiler.compileTests(context)

                # Run the corresponding Python test script for this category
                cmd: List[str] = ["python3", f"./scripts/testing/{vta}.py"]
                subprocess.run(cmd, check=True)
        else:
            tempName: str = context.testList.replace(".", "/")
            context.testList = tempName

            cCompiler.compileTests(context)

            cmd: List[str] = ["python3", f"./scripts/testing/{tempName}.py"]
            subprocess.run(cmd, check=True)
