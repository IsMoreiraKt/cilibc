/**
 * @file tests/stddef/null/voidnull.test.c
 * @brief Test for the NULL pointer constant.
 *
 * This test checks that the NULL pointer constant is defined correctly
 * and that a function returning NULL behaves as expected.
 *
 * @see https://pubs.opengroup.org/onlinepubs/9799919799/
 * @see include/stddef.h
 * @see arch/__your_arch__/bits/stddef.h
 *
 * @author Ismael Moreira
 */
#include "stddef.h"

/**
 * @brief Main function to test NULL pointer constant.
 *
 * This function checks if a pointer initialized to NULL is indeed NULL.
 * If it is not, the function returns 1 indicating a failure.
 * If it is, the function returns 0 indicating success.
 *
 * @return int Returns 0 on success, 1 on failure.
 */
int main(void)
{
    void* ptr = (void*) 0;

    if (ptr != NULL)
        return 1;

    return 0;
}
