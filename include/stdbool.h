/**
 * @file include/stdbool.h
 * @brief Standard boolean type definitions.
 * 
 * Defines the boolean type and its values for the CILibc.
 * 
 * @see https://pubs.opengroup.org/onlinepubs/9799919799/
 * 
 * @author Ismael Moreira
 */
#ifndef __CILIBC__STANDARD_BOOLEAN__
#define __CILIBC__STANDARD_BOOLEAN__

/**
 * @typedef bool
 * @brief Boolean type.
 * 
 * This type is used to represent boolean values in CILibc.
 */
typedef _Bool bool;


/**
 * @def true
 * @brief Boolean true value.
 * 
 * Represents the true value in boolean expressions.
 */
#define true 1

/**
 * @def false
 * @brief Boolean false value.
 * 
 * Represents the false value in boolean expressions.
 */
#define false 0

#endif // __CILIBC__STANDARD_BOOLEAN__
