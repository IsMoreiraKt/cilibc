# autobot ld flags

Appends extra flags to the linker invocation.

Some linker flags are enforced by the build system and **cannot be removed or overridden**. These are necessary for correct startup and ABI behavior.

##### Enforced Flags

The following flags are always included and cannot be modified:

- **-nostdlib**: disables standard system libraries
- **-no-pie**: disables position-independent executable generation
- **-e \_start**: sets the program entry point to \_start

Any additional flags passed via **--ld-flags** are appended after the required ones.

### Usage

```shell
./autobot --ld-flags -static
./autobot -lfd -z max-page-size=0x1000
```
