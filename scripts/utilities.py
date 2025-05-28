from typing import List
import subprocess


def run(cmd: List[str], verbose: bool = False) -> None:
    """
    Run a shell command.

    Args:
        cmd: List of command arguments.
        verbose: If True, prints the command and shows all output.
    Raises:
        subprocess.CalledProcessError: If the command fails.
    """
    if verbose:
        print(">>", " ".join(cmd))
        subprocess.run(cmd, check=True)
    else:
        subprocess.run(
            cmd, check=True, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL
        )
