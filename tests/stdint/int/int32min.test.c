/**
 * @file tests/stdint/int32min.test.c
 * @brief Test for INT32_MIN.
 *
 * This test checks that the INT32_MIN macro is defined correctly
 * and that it equals -2147483648, which is the minimum value for a
 * 32-bit signed integer.
 *
 * @author Ismael Moreira
 */
#include "stdint.h"
#include "tests.h"

/**
 * @brief Main function to test INT32_MIN.
 *
 * This function checks if INT32_MIN is equal to -2147483648.
 * If it is not, the function returns 1 indicating a failure.
 * If it is, the function returns 0 indicating success.
 *
 * @return int Returns 0 on success, 1 on failure.
 */
int main(void)
{
    int32_t test_value = -2147483648;

    if (INT32_MIN != test_value)
        return 1;

    return 0;
}
