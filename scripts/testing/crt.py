"""
@file crt.py
@brief Unit tests for cilibc CRT (C runtime) startup code.

This module contains unit tests for verifying the correct behavior
of the cilibc startup code, including handling of missing main(),
empty main(), argument passing, and environment variable propagation.

Each test runs the corresponding test binary and checks the exit code
and output.
"""
from subprocess import run, CompletedProcess
from typing import Any, List
import unittest
import os


class TestCRT(unittest.TestCase):
    """
    Unit tests for cilibc CRT startup code.
    """

    def testNoMainC(self):
        """
        Test that the binary exits with code 127 if main() is missing.
        """
        result: CompletedProcess = run(
            ["__build/test/nomain"], capture_output=True, text=True
        )

        stdout: Any = result.stdout
        stderr: Any = result.stderr
        exitCode: int = result.returncode

        self.assertEqual(exitCode, 127)
        self.assertEqual(stdout, "")
        self.assertEqual(stderr, "")

    def testMainEmptyC(self):
        """
        Test that main(void) is called and returns 0.
        """
        result: CompletedProcess = run(
            ["__build/test/mainempty"], capture_output=True, text=True
        )

        stdout: Any = result.stdout
        stderr: Any = result.stderr
        exitCode: int = result.returncode

        self.assertEqual(exitCode, 0)
        self.assertEqual(stdout, "")
        self.assertEqual(stderr, "")

    def testMainC(self):
        """
        Test that argc and argv are passed correctly to main(int, char**).
        """
        result: CompletedProcess = run(
            ["__build/test/main", "--hello", "--world"], capture_output=True, text=True
        )

        stdout: Any = result.stdout
        stderr: Any = result.stderr
        exitCode: int = result.returncode

        stdoutTerms: List[str] = ["Argc: 3", "argv[1]: --hello"]

        self.assertEqual(exitCode, 0)

        for term in stdoutTerms:
            self.assertIn(term, stdout)

        self.assertEqual(stderr, "")

    def testMainEnvpC(self):
        """
        Test that argc, argv, and envp are passed correctly and environment variables are visible.
        """
        env = os.environ.copy()
        env["MY_VAR"] = "value"

        result: CompletedProcess = run(
            ["__build/test/mainenvp", "--hello", "--world"],
            capture_output=True,
            text=True,
            env=env,
        )

        stdout: Any = result.stdout
        stderr: Any = result.stderr
        exitCode: int = result.returncode

        stdoutTerms: List[str] = ["Argc: 3", "argv[1]: --hello", "MY_VAR=value"]

        self.assertEqual(exitCode, 0)

        for term in stdoutTerms:
            self.assertIn(term, stdout)

        self.assertEqual(stderr, "")


if __name__ == "__main__":
    unittest.main()
