/**
 * File: arch/x86_64/crt/crt1.S
 * Author: Ismael Moreira
 * Purpose: Entry point for x86_64 architecture.
 */
.text
.global _start

/**
 * These symbols are weakly defined to allow the linker to override them
 * with user-defined functions for initialization and finalization.
 * And they are hidden to prevent symbol conflicts in shared libraries.
 */
.weak _init
.weak _fini
.weak _rtld_fini
.weak main
.hidden _init
.hidden _fini
.hidden _rtld_fini

_start:
  /**
   * Clear frame pointer for ABI compliance
   */
  xor %rbp, %rbp

  /**
   * Move 6th argument to r9, usually NULL or atexit registration pointer
   */
  mov %rdx, %r9 /* 6th arg from initial rdx (stack_end pointer) */

  /* Stack layout at entry:
   * [rsp] = argc
   * [rsp + 8] = argv[0]
   * ...
   * Extract argc into rsi
   */
  pop %rsi /* Pop the argument count into rsi */

  /** 
   * Set argv pointer in rdx
   */
  mov %rsp, %rdx /* rdx now points to argv[0] */

  /** 
   * Align stack pointer to 16 bytes for ABI compliance
   */
  andq $-16, %rsp
  sub $8, %rsp /* Reserve space for return address */

  /**
   * Prepare arguments for __libc_start_main
   */
  lea _init(%rip), %rcx /* init function pointer (4th arg) */
  lea _fini(%rip), %r8 /* fini function pointer (5th arg) */
  lea _rtld_fini(%rip), %r10 /* rtld_fini function pointer (6th arg) */

  /**
   * Load address of main function explicitly
   */
  mov $main, %rdi /* main function pointer (1st arg) */

  /**
   * Tests if the main function is defined.
   * If not defined, jump to error.
   */
  test %rdi, %rdi
  je 2f

  /**
   * Call libc entry point, which calls main internally
   */
  call __libc_start_main

/**
 * In case exit fails, loop forever
 */
1:
  jmp 1b

/**
 * If main is not defined, exit with error code 127
 */
2:
  mov $127, %edi /* Exit code 127 */
  andq $-16, %rsp /* Ensure stack is aligned */
  call _exit
