"""
@file Arch.py
@brief Architecture detection and selection utilities for cilibc build scripts.

This module provides functions and mappings to resolve and validate supported
CPU architectures for the build process. It maps various platform.machine()
outputs to canonical architecture names and updates the build context accordingly.
"""
from scripts.BuildContext import BuildContext
from typing import List
from sys import exit
import platform

#: List of supported CPU architectures for cilibc.
cpuArchSupported: List[str] = [
    "aarch32",
    "aarch64",
    "mips32",
    "mips64",
    "ppc32",
    "ppc64",
    "spu",
    "rv32",
    "rv64",
    "ia32",  # x86
    "x32",
    "x86_64",
]

#: Mapping from platform.machine() and common aliases to canonical architecture names.
cpuMapping: dict[str, str] = {
    "x86_64": "x86_64",
    "amd64": "x86_64",
    "i386": "ia32",
    "i686": "ia32",
    "x86": "ia32",
    "x32": "x32",
    "aarch64": "aarch64",
    "arm64": "aarch64",
    "armv7l": "aarch32",
    "armv8l": "aarch32",
    "arm": "aarch32",
    "mips": "mips32",
    "mips64": "mips64",
    "ppc": "ppc32",
    "ppc64": "ppc64",
    "powerpc": "ppc32",
    "powerpc64": "ppc64",
    "riscv32": "rv32",
    "riscv64": "rv64",
    "spu": "spu",
}


def _resolveCpuArch(cpuTarget: str) -> List[str]:
    """
    Resolve and validate the canonical CPU architecture name.

    If cpuTarget is empty or None, detects the host architecture using platform.machine().
    Maps the input or detected value to a canonical architecture name using cpuMapping,
    and checks if it is supported.

    Args:
        cpuTarget (str): The requested architecture name or alias.

    Returns:
        List[str]: ["0", canonical_name] if supported, or ["1", input_name] if not.
    """
    if not cpuTarget:
        cpuTarget = platform.machine().lower()

    searchResult: str = cpuMapping.get(cpuTarget)

    if searchResult not in cpuArchSupported:
        return ["1", cpuTarget]

    return ["0", searchResult]


def setCpuArch(cpuTarget: str, context: BuildContext) -> None:
    """
    Set the CPU architecture in the given BuildContext.

    Resolves and validates the architecture, then updates the context.
    If the architecture is not supported, prints an error and exits.
    If verbose mode is enabled, logs the selected architecture.

    Args:
        cpuTarget (str): The requested architecture name or alias.
        context (BuildContext): The build context to update.
    """
    searchResult: List[str] = _resolveCpuArch(cpuTarget)

    if searchResult[0] == "1":
        logMessage: str = f"The target CPU {searchResult[1]} is not currently supported"
        context.logger.log("error", logMessage)
        exit(1)

    context.cpuArch = searchResult[1]

    if context.verbose:
        logMessage: str = f"The CPU architecture has been set as: {context.cpuArch}"
        context.logger.log("info", logMessage)
