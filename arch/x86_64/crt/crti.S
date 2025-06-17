/**
 * File: arch/x86_64/crt/crti.S
 * Author: Ismael Moreira
 * Purpose: Initialization and finalization functions for x86_64 architecture.
 */
.section .init
.global _init
/**
 * Called before main() to perform any necessary initialization.
 * Currently implemented as a no-op.
 */
_init:
  push %rax

.section .fini
.global _fini
/**
 * Called after main() returns, for cleanup or finalization.
 * Currently implemented as a no-op.
 */
_fini:
  push %rax
