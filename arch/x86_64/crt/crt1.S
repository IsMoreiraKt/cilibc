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
  xor %rbp, %rbp /* Clear frame pointer for ABI compliance */
  mov %rdx, %r9 /* Save stack_end (original rdx) in r9 */

  /**
   * Retrieve argc and argv
   */
  mov (%rsp), %rsi /* argc -> rsi (2nd argument to __libc_start_main) */
  lea 8(%rsp), %rdx /* argv -> rdx (3rd argument: &argv[0]) */

  /**
   * Calculate envp pointer: envp = argv + argc + 1
   */
  lea 8(%rsi, %rdx, 1), %rbx /* rbx = envp */

  /**
   * Find auxv:
   * envp is a NULL-terminated array, so scan forward until NULL,
   * then auxv starts at the next address.
   */
  mov %rbx, %rax /* rax = envp */

.find_auxv:
  mov (%rax), %rcx /* Load pointer at envp[i] */
  test %rcx, %rcx /* Check for NULL terminator */
  je .found_auxv
  add $8, %rax /* Advance to next envp entry */
  jmp .find_auxv

.found_auxv:
  add $8, %rax /* auxv starts after NULL */
  mov %rax, %r12 /* Save auxv pointer in r12 */

  /* Align stack and reserve space for return address */
  andq $-16, %rsp
  sub $8, %rsp

  /**
   * Prepare arguments for __libc_start_main:
   * rdi = main,
   * rsi = argc,
   * rdx = argv,
   * rcx = _init,
   * r8 = _fini,
   * r9 = stack_end,
   * r10 = _rtld_fini
   */
  lea _init(%rip), %rcx
  lea _fini(%rip), %r8
  lea _rtld_fini(%rip), %r10
  mov $main, %rdi

  test %rdi, %rdi
  je .no_main

  call __libc_start_main

.hang:
  /**
   * Infinite loop if __libc_start_main returns
   */
  jmp .hang

.no_main:
  /**
   * Exit code 127 if main is missing
   */
  mov $127, %edi
  andq $-16, %rsp
  call _exit
