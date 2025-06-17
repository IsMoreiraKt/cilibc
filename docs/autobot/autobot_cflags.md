# autobot cflags

Passes additional flags directly to the C compiler during build.

This option allows full control over compilation flags such as optimizations, warnings, and ABI modifiers. These flags are appended to the compiler command as-is, in the order provided.

### Usage

```shell
./autobot --cflags -O0 -nostdlib -fno-builtin -fno-stack-protector
./autobot --cf -fno-ident -fno-asynchronous-unwind-tables -Wall -Wextra
```
