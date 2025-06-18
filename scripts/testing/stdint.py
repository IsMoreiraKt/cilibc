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

if __name__ == "__main__":
    unittest.main()
