/**
 * @file tests/main/mainempty.test.c
 * @brief Test for calling main() with no parameters in cilibc startup.
 *
 * This test ensures that the startup code correctly calls main()
 * even when it is defined without any parameters (i.e., int main(void)).
 * The test passes if main() is called and returns 0.
 *
 * @author Ismael Moreira
 */

/**
 * @brief Entry point for the test: main with no parameters.
 *
 * Should be called by the startup code.
 * Returns 0 to indicate success.
 *
 * @return int Always returns 0.
 */
int main()
{
    return 0;
}
