#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: string of 0  and 1
 *
 * Return: unsigned int number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int i;

	if (!*b)
		return (0);
	for (i = 0 ; b[i] ; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		number = number * 2 + (b[i] - '0');
	}
	return (number);
}
