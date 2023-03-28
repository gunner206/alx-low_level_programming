#include "main.h"

/**
 * puts2 - prints every other char of a string
 * @str: string to be printed
 */
void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] == '\0')
			_putchar('\n');
		else
			 _putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
