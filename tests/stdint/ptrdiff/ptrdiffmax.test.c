/**
 * @file tests/stdint/ptrdiff/ptrdiffmax.test.c
 * @brief Test for the ptrdiff_t maximum value.
 *
 * This test checks that the PTRDIFF_MAX macro is defined correctly
 * and that it equals 9223372036854775807, which is the maximum value
 * for a ptrdiff_t type, a signed 64-bit integer.
 *
 * @see https://pubs.opengroup.org/onlinepubs/9799919799/
 * @see include/stdint.h
 * @see include/stddef.h
 * @see arch/__your_arch__/bits/stdint.h
 *
 * @author Ismael Moreira
 */
#include "stddef.h"
#include "stdint.h"

/**
 * @brief Main function to test PTRDIFF_MAX.
 *
 * This function checks if PTRDIFF_MAX is equal to 9223372036854775807.
 * If it is not, the function returns 1 indicating a failure.
 * If it is, the function returns 0 indicating success.
 *
 * @return int Returns 0 on success, 1 on failure.
 */
int main(void)
{
    ptrdiff_t test_value = 9223372036854775807;

    if (PTRDIFF_MAX != test_value)
        return 1;

    return 0;
}
