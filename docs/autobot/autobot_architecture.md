# autobot architecture

Sets the target CPU architecture for the build process.

If no architecture is specified, the current host architecture is used. This determines which startup files, compilation flags, and ABI conventions are applied during the build of the CRT and CILibc.

### Options

- **aarch32**
- **aarch64**
- **mips32**
- **mips64**
- **ppc32**
- **ppc64**
- **spu**
- **rv32**
- **rv64**
- **ia32**
- **x32**
- **x86_64**

### Usage

```shell
./autobot --architecture x86_64
./autobot -a rv64
```
