#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 * Return: The converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1 or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int num = 0;
    int base = 1;
    const char *ptr;

    /*Check if the string is NULL*/
    if (!b)
        return (0);

    /*Move the pointer to the end of the string to start from LSB*/
    ptr = b;
    while (*ptr)
        ptr++;
    ptr--;

    /*Convert the binary to unsigned int*/
    for (; ptr >= b; ptr--)
    {
        if (*ptr != '0' && *ptr != '1')
	       	/*Check for invalid chars*/
            return (0);

        if (*ptr == '1')
            num += base;

        base *= 2;
    }
    
    return (num);
}

