#include "main.h"

/**
 * print_line - print lines
 * Return: void
 * @n: parameter
 */
void print_line(int n)
{
	char i;

	for (i = n ; i <= n ; i++)
	{
		i = '_';
		_putchar(i);
	}
	_putchar('\n');
}
