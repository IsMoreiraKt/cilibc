"""
@file BuildContext.py
@brief Defines the BuildContext dataclass for managing build configuration in cilibc scripts.

This module provides the BuildContext dataclass, which encapsulates all relevant
information and options needed during the build process, such as architecture,
compiler, flags, verbosity, and test selection.
"""
from scripts.Logger import Logger
from dataclasses import dataclass, field
from typing import List, Optional


@dataclass
class BuildContext:
    """
    Holds configuration and state for a cilibc build session.

    Attributes:
        cpuArch (Optional[str]): Target CPU architecture (e.g., 'x86_64', 'aarch64').
        compiler (Optional[str]): Compiler executable to use (e.g., 'gcc', 'clang').
        compilerFlags (Optional[List[str]]): List of flags to pass to the compiler.
        linkerFlags (Optional[List[str]]): List of flags to pass to the linker.
        verbose (Optional[bool]): If True, enables verbose output during build.
        testList (Optional[List[str]]): List of test names or paths to execute.
    """

    verbose: Optional[bool] = None
    logger: Logger = None
    cpuArch: Optional[str] = None
    compiler: Optional[str] = None
    compilerFlags: Optional[List[str]] = field(default_factory=list)
    linkerFlags: Optional[List[str]] = field(default_factory=list)
    testList: Optional[List[str]] = field(default_factory=list)
