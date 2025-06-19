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
        Test that INT8_MIN is -128.
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
        Test that INT8_MAX is 127.
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
        Test that INT16_MIN is -32768.
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
        Test that INT16_MAX is 32767.
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
        Test that INT32_MIN is -2147483648.
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
        Test that INT32_MAX is 2147483647.
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
        Test that INT64_MIN is -9223372036854775808.
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
        Test that INT64_MAX is 9223372036854775807.
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
        Test that UINT8_MAX is 255.
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
        Test that UINT16_MAX is 65535.
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
        Test that UINT32_MAX is 4294967295.
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

    def testUInt64Max(self):
        """
        Test that UINT64_MAX is 18446744073709551615.
        """
        result: CompletedProcess = run(
            ["__build/test/uint64max"], capture_output=True, text=True
        )

        stdout: Any = result.stdout
        stderr: Any = result.stderr
        exitCode: int = result.returncode

        self.assertEqual(exitCode, 0)
        self.assertEqual(stdout.strip(), "")
        self.assertEqual(stderr, "")

    def testIntLeast8Min(self):
        """
        Test that INT_LEAST8_MIN is -128.
        """
        result: CompletedProcess = run(
            ["__build/test/intleast8min"], capture_output=True, text=True
        )

        stdout: Any = result.stdout
        stderr: Any = result.stderr
        exitCode: int = result.returncode

        self.assertEqual(exitCode, 0)
        self.assertEqual(stdout.strip(), "")
        self.assertEqual(stderr, "")

    def testIntLeast16Min(self):
        """
        Test that INT_LEAST16_MIN is -32768.
        """
        result: CompletedProcess = run(
            ["__build/test/intleast16min"], capture_output=True, text=True
        )

        stdout: Any = result.stdout
        stderr: Any = result.stderr
        exitCode: int = result.returncode

        self.assertEqual(exitCode, 0)
        self.assertEqual(stdout.strip(), "")
        self.assertEqual(stderr, "")

    def testIntLeast32Min(self):
        """
        Test that INT_LEAST32_MIN is -2147483648.
        """
        result: CompletedProcess = run(
            ["__build/test/intleast32min"], capture_output=True, text=True
        )

        stdout: Any = result.stdout
        stderr: Any = result.stderr
        exitCode: int = result.returncode

        self.assertEqual(exitCode, 0)
        self.assertEqual(stdout.strip(), "")
        self.assertEqual(stderr, "")


if __name__ == "__main__":
    unittest.main()
