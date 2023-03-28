#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i;
	int counter = 0;
	char rev = s[0];

	while (counter != '\0')
		counter++;
	for (i = 0 ; i < counter ; i++)
	{
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
