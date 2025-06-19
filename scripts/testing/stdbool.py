"""
@file stdbool.py
@brief Unit tests for the stdbool module.

This module contains unit tests for the stdbool module, which provides
boolean operations and utilities.
"""
from subprocess import run, CompletedProcess
from typing import Any, List
import unittest
import os


class TestStdBool(unittest.TestCase):
    """
    Unit tests for the stdbool module.
    """

    def testBool(self):
        """
        Test that bool operations work correctly.
        """
        result: CompletedProcess = run(
            ["__build/test/bool"], capture_output=True, text=True
        )

        stdout: Any = result.stdout
        stderr: Any = result.stderr
        exitCode: int = result.returncode

        self.assertEqual(exitCode, 0)
        self.assertEqual(stdout.strip(), "")
        self.assertEqual(stderr, "")

    def testBoolTrueFalseAreDefined(self):
        """
        Test that the macro __bool_true_false_are_defined is well defined.
        """
        result: CompletedProcess = run(
            ["__build/test/booltruefalsearedefined"], capture_output=True, text=True
        )

        stdout: Any = result.stdout
        stderr: Any = result.stderr
        exitCode: int = result.returncode

        self.assertEqual(exitCode, 0)
        self.assertEqual(stdout.strip(), "")
        self.assertEqual(stderr, "")


if __name__ == "__main__":
    unittest.main()
