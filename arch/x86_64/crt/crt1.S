/**
 * File: arch/x86_64/crt/crt1.S
 * Author: Ismael Moreira
 * Purpose: Entry point for x86_64 ELF binaries.
 *
 * See: https://refspecs.linuxbase.org/elf/x86_64-abi-0.99.pdf
 * See: arch/x86_64/crt/crti.S
 * See: arch/x86_64/crt/crtn.S
 * See: src/crt/crt1.c
 *
 * Stack layout at entry:
 *   [rsp + 0x00]: argc (int)
 *   [rsp + 0x08]: argv[0] (char *)
 *   ...
 *   [rsp + 8*argc]: NULL (end of argv)
 *   [rsp + 8*(argc+1)]: envp[0] (char *)
 *   ...
 *   [rsp + ...]: auxv[0] (Elf64_auxv_t)
 */
.text
.global _start

/**
 * These symbols are weakly defined to allow the linker to override them
 * with user-defined functions for initialization and finalization.
 * They are hidden to prevent symbol conflicts in shared libraries.
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

  /* Prepare arguments for __libc_start_main:
   * rdi = main,
   * rsi = argc,
   * rdx = argv,
   * rcx = envp (NULL, calculated by __libc_start_main),
   * r8 = auxv (NULL, calculated by __libc_start_main),
   * r9 = _init,
   * r10 = _fini,
   * r11 = _rtld_fini
   */
  mov $main, %rdi /* main function pointer */

  /* Retrieve argc and argv from stack */
  mov (%rsp), %rsi /* argc -> rsi (2nd arg to __libc_start_main) */
  lea 8(%rsp), %rdx /* argv -> rdx (3rd arg to __libc_start_main) */

  /* envp and auxv are not passed here */
  andq $-16, %rsp /* Align stack pointer to 16 bytes */

  xor %rcx, %rcx /* envp = NULL */
  xor %r8, %r8 /* auxv = NULL */

  lea _init(%rip), %r9
  lea _fini(%rip), %r10
  lea _rtld_fini(%rip), %r11

  /**
   * Verify if main is defined.
   * If main is not defined, we will exit with code 127.
   * If main is defined, we will call __libc_start_main.
   */
  test %rdi, %rdi
  je .no_main

  call __libc_start_main

.hang:
  jmp .hang /* Infinite loop if __libc_start_main returns */

.no_main:
  mov $127, %edi /* Exit code 127 if main is missing */
  andq $-16, %rsp
  call _exit
