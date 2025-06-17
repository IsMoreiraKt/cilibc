"""
@file Logger.py
@brief Logger utility for cilibc scripts.

This module provides a Logger class that wraps Python's logging module,
offering a unified interface for logging messages with different severity levels
to the console. Supports log levels: debug, info, warning, error, and critical.
"""
from logging import (
    Logger,
    StreamHandler,
    Formatter,
    getLogger,
    DEBUG,
    INFO,
    WARNING,
    ERROR,
    CRITICAL,
)

#: Mapping from string log level names to logging module constants.
_logLevels: dict[str, int] = {
    "debug": DEBUG,
    "info": INFO,
    "warn": WARNING,
    "warning": WARNING,
    "error": ERROR,
    "critical": CRITICAL,
}


class Logger:
    """
    Logger utility class for cilibc scripts.

    Provides a simple interface to log messages with different severity levels
    to the console, using a consistent format.

    Example usage:
        logger = Logger()
        logger.log("info", "Build started.")
        logger.log("error", "Build failed.")
    """

    def __init__(self):
        """
        Initialize the Logger instance with a console handler and formatter.
        """
        self.logger: Logger = getLogger("autobot")
        self.logger.setLevel(DEBUG)

        self.consoleHandler: StreamHandler = StreamHandler()
        self.loggerFormatter: Formatter = Formatter(
            "[%(asctime)s] %(levelname)s (%(name)s): %(message)s"
        )
        self.consoleHandler.setFormatter(self.loggerFormatter)

        if not self.logger.hasHandlers():
            self.logger.addHandler(self.consoleHandler)

    def log(self, logLevelStr: str, logMessage: str) -> None:
        """
        Log a message with the specified severity level.

        Args:
            logLevelStr (str): Log level as a string (e.g., "info", "error").
            logMessage (str): The message to log.

        If the log level is invalid, logs an error message instead.
        """
        logLevel: int = _logLevels.get(logLevelStr.lower())

        if logLevel is None:
            self.logger.error(f"Invalid log level: {logLevelStr}")
            return

        self.logger.log(logLevel, logMessage)
