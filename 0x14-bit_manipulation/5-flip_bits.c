#include "main.h"

/**
 * flip_bits - Function that counts the number of bits to change
 * to get from one number to another
 * @n: input param (first number)
 * @m: input param (second number)
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
