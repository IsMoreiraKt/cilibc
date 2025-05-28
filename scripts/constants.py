import os
from pathlib import Path
from typing import List

BUILD_DIR: Path = Path("__build")
ARCH: str = "x86_64"
COMPILER: str = os.environ.get("CC", "gcc")
COMPILER_FLAGS: List[str] = [
    "-c",
    "-O0",
    "-nostdlib",
    "-fno-builtin",
    "-fno-stack-protector",
    "-fno-PIC",
    "-fno-ident",
    "-fno-asynchronous-unwind-tables",
    "-Wall",
    "-Wextra",
]
LINKER_FLAGS: List[str] = ["-static", "-nostdlib", "-e _start"]
