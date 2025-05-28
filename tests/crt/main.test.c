/**
 * @file tests/main/main.test.c
 * @brief Test for correct handling of argc and argv in cilibc startup.
 *
 * This test verifies that the startup code correctly passes argc and argv
 * to main(). It prints the value of argc and each argument in argv to
 * standard output using the test utility functions.
 *
 * The test passes if all arguments are printed as expected.
 *
 * @author Ismael Moreira
 */
#include "tests.h"

/**
 * @brief Entry point for the test: main with argc and argv.
 *
 * Prints argc and all argv entries to standard output.
 *
 * @param argc Number of command-line arguments.
 * @param argv Array of argument strings.
 * @return int Always returns 0.
 */
int main(int argc, const char** argv)
{
    const char* argc_str = __convert_to_cstring(argc);

    __print("Argc: ", 7);
    __print(argc_str, __strlen(argc_str));
    __print("\n", 2);

    __print("Argv: ", 7);

    for (int i = 0; i < argc; i++) {
        __print("argv[", 6);
        __print(__convert_to_cstring(i), 2);
        __print("]: ", 4);
        __print(argv[i], __strlen(argv[i]));
        __print("\n", 2);
    }

    return 0;
}
