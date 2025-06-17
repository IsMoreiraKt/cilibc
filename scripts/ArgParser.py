"""
@file ArgParser.py
@brief Command-line argument parser for cilibc build and test scripts.

This module provides the ArgParser class, which wraps argparse to handle
command-line options for building, testing, and configuring cilibc.
"""
from argparse import ArgumentParser, Namespace


class ArgParser:
    """
    Command-line argument parser for cilibc build and test scripts.

    Supports options for verbosity, architecture selection, compilation,
    compiler and linker configuration, and test selection.
    """

    def __init__(self) -> None:
        """
        Initialize the argument parser and add supported arguments.
        """
        self.argument_parser: ArgumentParser = ArgumentParser(
            description="Build and test script for cilibc runtime"
        )
        self._init_parser()

    def _init_parser(self) -> None:
        """
        Add all supported command-line arguments to the parser.
        """
        self.argument_parser.add_argument(
            "-v",
            "--verbose",
            action="store_true",
            help="Show detailed output during build and test processes.",
        )

        self.argument_parser.add_argument(
            "-a",
            "--architecture",
            type=str,
            help="Set the target architecture for the build (e.g., x86_64, aarch64, mips32, etc.).",
        )

        self.argument_parser.add_argument(
            "-c",
            "--compile",
            action="store_true",
            help="Compile cilibc and generate the final binary.",
        )

        self.argument_parser.add_argument(
            "-cc",
            "--c-compiler",
            type=str,
            help="Specify the C compiler to use (e.g., gcc, clang).",
        )

        self.argument_parser.add_argument(
            "-cf",
            "--c-flags",
            nargs="*",
            type=str,
            help="Specify additional flags to pass to the C compiler.",
        )

        self.argument_parser.add_argument(
            "-ldf",
            "--ld-flags",
            nargs="*",
            type=str,
            help="Specify additional flags to pass to the linker.",
        )

        self.argument_parser.add_argument(
            "-t",
            "--test",
            nargs="?",
            const="all",
            help="Run specific test or test group",
        )

    def parse(self) -> Namespace:
        """
        Parse and return the command-line arguments.

        Returns:
            argparse.Namespace: The parsed arguments.
        """
        return self.argument_parser.parse_args()
