/**
 * @file tests/stdint/intleast16min.test.c
 * @brief Test for INT_LEAST16_MIN.
 *
 * This test checks that the INT_LEAST16_MIN macro is defined correctly
 * and that it equals -32768, which is the minimum value for a signed
 * 16-bit integer.
 *
 * @author Ismael Moreira
 */
#include "stdint.h"
#include "tests.h"

/**
 * @brief Main function to test INT_LEAST16_MIN.
 *
 * This function checks if INT_LEAST16_MIN is equal to -32768.
 * If it is not, the function returns 1 indicating a failure.
 * If it is, the function returns 0 indicating success.
 *
 * @return int Returns 0 on success, 1 on failure.
 */
int main()
{
    int16_t test_value = -32768;

    if (INT_LEAST16_MIN != test_value)
        return 1;

    return 0;
}
