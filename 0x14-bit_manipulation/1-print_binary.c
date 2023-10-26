#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: the number.
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
    unsigned long int mask;
    char flag = 0;

    /* If n is 0, just print 0 */
    if (n == 0)
    {
        printf("0");
        return;
    }

    /* Start with the most significant bit and iterate to least significant */
    for (mask = 1UL << (sizeof(n) * 8 - 1); mask; mask >>= 1)
    {
        /* If current bit is set */
        if (n & mask)
        {
            flag = 1;
            printf("1");
        }
        else if (flag) /* Only print 0's after the first 1 is encountered */
        {
            printf("0");
        }
    }
}

