#include "main.h"

/**
 * flip_bits - number of bits that need to change
 * @n: first number
 * @m: changed to number
 *
 * Return: number count
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int current;
	unsigned long int different = n ^ m;
	int i;
	int count = 0;

	for (i = 63 ; i >= 0 ; i--)
	{
		current = different >> i;

		if (current & 1)
			count++;
	}
	return (count);
}
