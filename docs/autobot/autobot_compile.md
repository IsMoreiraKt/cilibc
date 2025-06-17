# autobot compile

Builds the C runtime objects and the complete CILibc library for the target architecture.

This command executes the following steps in order:

##### Compile the CRT (C Runtime)

Generates the following object files:

- cr1.o
- crti.o
- crtn.o
- ct1_c.o

Output directory: \_\_build/crt

##### Compile all CILibc sources to object files

All C source files are compiled individually to .o files.

Output directory: \_\_build/temp/libc

##### Link the CILibc shared object (.so)

All object files are linked into a dynamic library.

Output file: \_\_build/bin/libc.so

##### Finalize runtime artifacts

The CRT object files are moved from **build/crt to **build/bin to consolidate all required linkable binaries into a single directory.

### Usage

```shell
autobot --compile
autobot -c
```
