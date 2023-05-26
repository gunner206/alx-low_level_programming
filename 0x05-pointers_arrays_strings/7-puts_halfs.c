#include "main.h"

void puts_half(char *str)
{
	int length = 0;
	int i;
	int n;
	char *y = str;

	while (*y != '\0')
	{
		y++;
		length++;
	}
	n = length / 2;
	for (i = n ; i < length ; i++)
	{
		if (length % 2 == 0)
		{
			n = length / 2;
			_putchar(str[i]);
		}
		else if (length % 2 != 0)
		{
			n = (length - 1) / 2;
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
