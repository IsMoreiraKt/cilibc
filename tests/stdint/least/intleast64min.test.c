/**
 * @file tests/stdint/intleast64min.test.c
 * @brief Test for INT_LEAST64_MIN.
 *
 * This test checks that the INT_LEAST64_MIN macro is defined correctly
 * and that it equals -9223372036854775808, which is the minimum value
 * for a signed 64-bit integer.
 *
 * @author Ismael Moreira
 */
#include "stdint.h"
#include "tests.h"

/**
 * @brief Main function to test INT_LEAST64_MIN.
 *
 * This function checks if INT_LEAST64_MIN is equal to -9223372036854775808.
 * If it is not, the function returns 1 indicating a failure.
 * If it is, the function returns 0 indicating success.
 *
 * @return int Returns 0 on success, 1 on failure.
 */
int main(void)
{
    int_least64_t test_value = -9223372036854775808;

    if (INT_LEAST64_MIN != test_value)
        return 1;

    return 0;
}
