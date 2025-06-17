---
name: Bug report
about: Report a bug or unexpected behavior in cilibc
---

### Summary

<!--
Briefly describe the problem. What is going wrong? Include error messages, test failures, or symptoms.
-->

### Steps to Reproduce

<!--
Provide steps to reliably reproduce the issue. Include code snippets, test cases, or specific build commands.
-->

```c
// Minimal example or failing test
```

```bash
# Build and test commands
python ./autobot
python ./autobot --test crt
```

### Expected Behavior

<!--
What should happen instead?
-->

### Actual Behavior

<!--
What actually happens? Include any error output, logs, or observable misbehavior.
-->

---

### Environment

| Field            | Value (fill in)                              |
| ---------------- | -------------------------------------------- |
| cilibc version   | commit hash or tag (e.g. main, v0.3.0)       |
| Compiler         | GCC 13.2.0, Clang 17.0.6, etc                |
| Kernel           | Linux 6.7.9, None (bare metal), etc          |
| System/OS        | Ubuntu 24.04, Alpine, Open BSD, etc          |
| Architecture     | x86_64, riscv32, etc                         |
| Toolchain/Extras | Binutils, QEMU, linker scripts, dependencies |

---

### Additional Notes

<!--
Anything else relevant — special build flags, init order, edge cases, etc.
-->
