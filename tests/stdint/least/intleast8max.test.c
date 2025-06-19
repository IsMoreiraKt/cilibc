/**
 * @file tests/stdint/intleast8max.test.c
 * @brief Test for INT_LEAST8_MAX.
 *
 * This test checks that the INT_LEAST8_MAX macro is defined correctly
 * and that it equals 127, which is the maximum value for a signed
 * 8-bit integer.
 *
 * @author Ismael Moreira
 */
#include "stdint.h"
#include "tests.h"

/**
 * @brief Main function to test INT_LEAST8_MAX.
 *
 * This function checks if INT_LEAST8_MAX is equal to 127.
 * If it is not, the function returns 1 indicating a failure.
 * If it is, the function returns 0 indicating success.
 *
 * @return int Returns 0 on success, 1 on failure.
 */
int main(void)
{
    int_least8_t test_value = 127;

    if (INT_LEAST8_MAX != test_value)
        return 1;

    return 0;
}
