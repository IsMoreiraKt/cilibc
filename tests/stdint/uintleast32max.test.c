/**
 * @file tests/stdint/uintleast32max.test.c
 * @brief Test for UINT_LEAST32_MAX.
 *
 * This test checks that the UINT_LEAST32_MAX macro is defined correctly
 * and that it equals 4294967295, which is the maximum value for an unsigned
 * 32-bit integer.
 *
 * @author Ismael Moreira
 */
#include "stdint.h"
#include "tests.h"

/**
 * @brief Main function to test UINT_LEAST32_MAX.
 *
 * This function checks if UINT_LEAST32_MAX is equal to 4294967295.
 * If it is not, the function returns 1 indicating a failure.
 * If it is, the function returns 0 indicating success.
 *
 * @return int Returns 0 on success, 1 on failure.
 */
int main(void)
{
    uint_least32_t test_value = 4294967295;

    if (UINT_LEAST32_MAX != test_value)
        return 1;

    return 0;
}
