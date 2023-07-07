#include "main.h"

/**
 * print_binary - prints binary representation
 * @n: number
 */
void print_binary(unsigned long int n)
{
	unsigned int bit;
	int printed = 0;
	int i;

	for (i = 63 ; i >= 0 ; i--)
	{
		bit = n >> i;

		if (bit & 1)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
		{
			_putchar('0');
		}
	}
	if (!printed)
		_putchar('0');
}
