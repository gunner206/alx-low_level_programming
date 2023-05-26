#include "main.h"

/**
 * puts2 - prints every other char of a string
 * @str: string to be printed
 */
void puts2(char *str)
{
	int length = 0;
	int i;
	char *y = str;

	while (*y != '\0')
	{
		y++;
		length++;
	}
	for (i = 0 ; i < length ; i++)
	{
		if (i % 2 == 0)
		{
		_putchar(str[i]);
		}
	}
	_putchar('\n');
}

