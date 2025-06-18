/**
 * @file tests/stdint/int32max.test.c
 * @brief Test for INT32_MAX.
 *
 * This test checks that the INT32_MAX macro is defined correctly
 * and that it equals 2147483647, which is the maximum value for a
 * 32-bit signed integer.
 *
 * @author Ismael Moreira
 */
#include "stdint.h"
#include "tests.h"

/**
 * @brief Main function to test INT32_MAX.
 *
 * This function checks if INT32_MAX is equal to 2147483647.
 * If it is not, the function returns 1 indicating a failure.
 * If it is, the function returns 0 indicating success.
 *
 * @return int Returns 0 on success, 1 on failure.
 */
int main()
{
    int32_t test_value = 2147483647;

    if (INT32_MAX != test_value)
        return 1;

    return 0;
}