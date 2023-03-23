#include "main.h"

/**
 * print_line - print lines
 * Return: void
 * @n: parameter
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 1; i <= n ; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
}
