/**
 * File: arch/x86_64/crt/crtn.S
 * Author: Ismael Moreira
 * Purpose: Finalization functions for x86_64 architecture.
 *
 * See: https://refspecs.linuxbase.org/elf/x86_64-abi-0.99.pdf
 * See: arch/x86_64/crt/crti.S
 * See: arch/x86_64/crt/crt1.S
 * See: src/crt/crt1.c
 */
.section .init
  pop %rax
  ret

.section .fini
  pop %rax
  ret
