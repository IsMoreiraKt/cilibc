/**
 * File: arch/x86_64/crt/crtn.S
 * Author: Ismael Moreira
 * Purpose: Finalization functions for x86_64 architecture.
 */
.section .init
  pop %rax
  ret

.section .fini
  pop %rax
  ret
