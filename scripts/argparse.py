import argparse


def parse_args() -> argparse.Namespace:
    """
    Parse command-line arguments.

    Returns:
        argparse.Namespace: Parsed arguments.
    """
    parser = argparse.ArgumentParser(description="Build script for cilibc runtime")

    parser.add_argument(
        "-v", "--verbose", action="store_true", help="show all compiler output"
    )

    return parser.parse_args()
