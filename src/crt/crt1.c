/**
 * @file src/crt1.c
 * @brief C runtime startup code.
 * This file contains the entry point for the C runtime, which initializes
 * the environment and calls the main function.
 *
 * @see arch/x86_64/crt/crti.S
 * @see arch/x86_64/crt/crt1.S
 * @see arch/x86_64/crt/crtn.S
 *
 * @author Ismael Moreira
 */

/**
 * @brief Minimal implementation of _exit syscall.
 *
 * This is a temporary implementation using syscall directly to terminate
 * the process with the given status code. Used to avoid linking against
 * any external libc exit handling.
 *
 * @warning This is a placeholder. Replace with a proper syscall interface.
 */
void _exit(int status)
{
    __asm__(
        "mov %0, %%edi\n" // status -> edi
        "mov $60, %%eax\n" // syscall number for exit
        "syscall\n"
        :
        : "r"(status)
        : "%eax", "%edi");
}

/**
 * @brief The C runtime startup function.
 * This function is called by the system to start the C runtime.
 * It initializes the environment and calls the main function.
 *
 * @param main A pointer to the main function.
 * @param argc The number of command line arguments.
 * @param argv An array of command line arguments.
 * @param init A pointer to the initialization function.
 * @param fini A pointer to the finalization function.
 * @param rtld_fini A pointer to the runtime dynamic linker finalization function.
 * @param stack_end A pointer to the end of the stack.
 */
_Noreturn void __libc_start_main(
    int (*main)(),
    int argc, char** argv,
    void (*init)(void),
    void (*fini)(void),
    void* rtld_fini,
    void* stack_end)
{
    /**
     * envp is an array of environment variables.
     * It is constructed by placing it after the command line arguments
     * in the argv array. The environment variables are expected to be
     * null-terminated strings, and the last element of envp is a
     * null pointer to indicate the end of the environment variables.
     */
    char** envp = argv + argc + 1;

    // TODO: support:
    // - TLS setup
    // - .init/.fini section calls
    // - rtld_fini integration
    // - optional early eelf contract validation
    // - stack protection setup

    /**
     * Call the main function with argc, argv, and envp
     */
    _exit(main(argc, argv, envp));
}
