from scripts.constants import BUILD_DIR, ARCH, COMPILER, CFLAGS
from scripts.utilities import run
from pathlib import Path


def compile_crt(verbose: bool = False) -> None:
    """
    Compile CRT (C runtime) assembly and C source files.

    - Assembles all .S files in arch/{ARCH}/crt to .o files in __build.
    - Compiles all .c files in src/crt to _c.o files in __build.

    Args:
        verbose: If True, shows all compiler output.
    """
    BUILD_DIR.mkdir(exist_ok=True)

    crt_asm: Path = Path("arch") / ARCH / "crt"
    dst: str = None

    for file in crt_asm.glob("*.S"):
        dst = BUILD_DIR / file.with_suffix(".o").name
        run([COMPILER, *CFLAGS, str(file), "-o", str(dst)], verbose)

    crt_c: Path = Path("src") / "crt"

    for file in crt_c.glob("*.c"):
        dst = BUILD_DIR / (file.stem + "_c.o")
        run([COMPILER, *CFLAGS, str(file), "-o", str(dst)], verbose)
