#include "main.h"

/**
 * print_last_digit - prints the last degit of given number
 * Return: always i
 * @i: parameter
 */
int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 0)
		k = -(k);
	_putchar(k + '0');
	return (k);
}
