/**
 * @file tests/main/nomain.test.c
 * @brief Test for missing main() symbol in cilibc startup.
 *
 * This test ensures that if no main() function is present,
 * the startup code exits with status 127 before calling
 * __libc_start_main. The function below should never be called
 * or linked as an entry point.
 *
 * @author Ismael Moreira
 */

/**
 * @brief Dummy function that should never be executed.
 *
 * If this function is called, the test has failed.
 */
int __no_compile() {
    return 42;
}
