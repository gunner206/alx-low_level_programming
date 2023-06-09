#include "main.h"

/**
 * _puts - a function the prints a string
 * @str: string to print
 *
 * Return: non
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
