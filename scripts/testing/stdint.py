"""
@file stdint.py
@brief Unit tests for cilibc standard integer types.

This module contains unit tests for verifying the correct behavior
of the cilibc standard integer types, including size and alignment checks.
"""
from subprocess import run, CompletedProcess
from typing import Any, List
import unittest
import os


class TestStdint(unittest.TestCase):
    """
    Unit tests for cilibc standard integer types.
    """

    def testInt8Min(self):
        """
        Test that int8_t is -128.
        """
        result: CompletedProcess = run(
            ["__build/test/int8min"], capture_output=True, text=True
        )

        stdout: Any = result.stdout
        stderr: Any = result.stderr
        exitCode: int = result.returncode

        self.assertEqual(exitCode, 0)
        self.assertEqual(stdout.strip(), "")
        self.assertEqual(stderr, "")

    def testInt8Max(self):
        """
        Test that int8_t is 127.
        """
        result: CompletedProcess = run(
            ["__build/test/int8max"], capture_output=True, text=True
        )

        stdout: Any = result.stdout
        stderr: Any = result.stderr
        exitCode: int = result.returncode

        self.assertEqual(exitCode, 0)
        self.assertEqual(stdout.strip(), "")
        self.assertEqual(stderr, "")

    def testInt16Min(self):
        """
        Test that int16_t is -32768.
        """
        result: CompletedProcess = run(
            ["__build/test/int16min"], capture_output=True, text=True
        )

        stdout: Any = result.stdout
        stderr: Any = result.stderr
        exitCode: int = result.returncode

        self.assertEqual(exitCode, 0)
        self.assertEqual(stdout.strip(), "")
        self.assertEqual(stderr, "")

    def testInt16Max(self):
        """
        Test that int16_t is 32767.
        """
        result: CompletedProcess = run(
            ["__build/test/int16max"], capture_output=True, text=True
        )

        stdout: Any = result.stdout
        stderr: Any = result.stderr
        exitCode: int = result.returncode

        self.assertEqual(exitCode, 0)
        self.assertEqual(stdout.strip(), "")
        self.assertEqual(stderr, "")

    def testInt32Min(self):
        """
        Test that int32_t is -2147483648.
        """
        result: CompletedProcess = run(
            ["__build/test/int32min"], capture_output=True, text=True
        )

        stdout: Any = result.stdout
        stderr: Any = result.stderr
        exitCode: int = result.returncode

        self.assertEqual(exitCode, 0)
        self.assertEqual(stdout.strip(), "")
        self.assertEqual(stderr, "")

    def testInt32Max(self):
        """
        Test that int32_t is 2147483647.
        """
        result: CompletedProcess = run(
            ["__build/test/int32max"], capture_output=True, text=True
        )

        stdout: Any = result.stdout
        stderr: Any = result.stderr
        exitCode: int = result.returncode

        self.assertEqual(exitCode, 0)
        self.assertEqual(stdout.strip(), "")
        self.assertEqual(stderr, "")

    def testInt64Min(self):
        """
        Test that int64_t is -9223372036854775808.
        """
        result: CompletedProcess = run(
            ["__build/test/int64min"], capture_output=True, text=True
        )

        stdout: Any = result.stdout
        stderr: Any = result.stderr
        exitCode: int = result.returncode

        self.assertEqual(exitCode, 0)
        self.assertEqual(stdout.strip(), "")
        self.assertEqual(stderr, "")

    def testInt64Max(self):
        """
        Test that int64_t is 9223372036854775807.
        """
        result: CompletedProcess = run(
            ["__build/test/int64max"], capture_output=True, text=True
        )

        stdout: Any = result.stdout
        stderr: Any = result.stderr
        exitCode: int = result.returncode

        self.assertEqual(exitCode, 0)
        self.assertEqual(stdout.strip(), "")
        self.assertEqual(stderr, "")

    def testUInt8Max(self):
        """
        Test that uint8_t is 255.
        """
        result: CompletedProcess = run(
            ["__build/test/uint8max"], capture_output=True, text=True
        )

        stdout: Any = result.stdout
        stderr: Any = result.stderr
        exitCode: int = result.returncode

        self.assertEqual(exitCode, 0)
        self.assertEqual(stdout.strip(), "")
        self.assertEqual(stderr, "")

    def testUInt16Max(self):
        """
        Test that uint16_t is 65535.
        """
        result: CompletedProcess = run(
            ["__build/test/uint16max"], capture_output=True, text=True
        )

        stdout: Any = result.stdout
        stderr: Any = result.stderr
        exitCode: int = result.returncode

        self.assertEqual(exitCode, 0)
        self.assertEqual(stdout.strip(), "")
        self.assertEqual(stderr, "")

    def testUInt32Max(self):
        """
        Test that uint32_t is 4294967295.
        """
        result: CompletedProcess = run(
            ["__build/test/uint32max"], capture_output=True, text=True
        )

        stdout: Any = result.stdout
        stderr: Any = result.stderr
        exitCode: int = result.returncode

        self.assertEqual(exitCode, 0)
        self.assertEqual(stdout.strip(), "")
        self.assertEqual(stderr, "")


if __name__ == "__main__":
    unittest.main()
