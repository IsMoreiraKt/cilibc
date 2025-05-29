/**
 * @file tests/main/mainenvp.test.c
 * @brief Test for correct handling of argc, argv, and envp in
 * cilibc startup.
 *
 * This test verifies that the startup code correctly passes
 * argc, argv, and envp to main(). It prints the value of argc,
 * each argument in argv, and each entry in envp to standard output
 * using the test utility functions.
 *
 * The test passes if all arguments and environment variables are
 * printed as expected.
 *
 * @author Ismael Moreira
 */
#include "tests.h"

/**
 * @brief Entry point for the test: main with argc, argv, and envp.
 *
 * Prints argc, all argv entries, and all envp entries to standard output.
 *
 * @param argc Number of command-line arguments.
 * @param argv Array of argument strings.
 * @param envp Array of environment variable strings.
 * @return int Always returns 0.
 */
int main(int argc, char** argv, char** envp)
{
    const char* argc_str = __convert_to_cstring(argc);

    __print("Argc: ", 6);
    __print(argc_str, __strlen(argc_str));
    __print("\n", 1);

    __print("Argv: ", 6);

    for (int i = 0; i < argc; i++) {
        __print("argv[", 5);
        __print(__convert_to_cstring(i), __strlen(__convert_to_cstring(i)));
        __print("]: ", 3);
        __print(argv[i], __strlen(argv[i]));
        __print("\n", 1);
    }

    for (int i = 0; envp[i] != (void*)0; i++) {
        __print("envp[", 5);
        __print(__convert_to_cstring(i), __strlen(__convert_to_cstring(i)));
        __print("]: ", 3);
        __print(envp[i], __strlen(envp[i]));
        __print("\n", 1);
    }

    return 0;
}
