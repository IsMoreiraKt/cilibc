/**
 * @file tests/stddef/null/nullcondition.test.c
 * @brief Test for evaluating NULL in a conditional statement.
 *
 * This test checks that NULL evaluates as false in a conditional expression,
 * as required by the C standard.
 *
 * @see https://pubs.opengroup.org/onlinepubs/9799919799/
 * @see include/stddef.h
 * @see arch/__your_arch__/bits/stddef.h
 *
 * @author Ismael Moreira
 */
#include "stddef.h"

/**
 * @brief Main function to test NULL in a conditional.
 *
 * This function returns 1 if NULL evaluates as true, indicating a failure.
 * It returns 0 if NULL evaluates as false, indicating success.
 *
 * @return int Returns 0 on success, 1 on failure.
 */
int main(void)
{
    if (NULL)
        return 1;

    return 0;
}
