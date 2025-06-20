"""
@file stddef.py
@brief Unit tests for the stddef module.

This module contains unit tests for the stddef module, which provides
standard definitions and types used in C programming.
"""
from subprocess import run, CompletedProcess
from typing import Any, List
import unittest
import os


class TestStdDef(unittest.TestCase):
    """
    Unit tests for the stddef module.
    """

    def testVoidNull(self):
        """
        Test that void null is defined correctly.
        """
        result: CompletedProcess = run(
            ["__build/test/voidnull"], capture_output=True, text=True
        )

        stdout: Any = result.stdout
        stderr: Any = result.stderr
        exitCode: int = result.returncode

        self.assertEqual(exitCode, 0)
        self.assertEqual(stdout.strip(), "")
        self.assertEqual(stderr, "")


if __name__ == "__main__":
    unittest.main()
