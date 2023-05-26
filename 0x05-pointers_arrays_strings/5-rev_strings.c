#include "main.h"

void rev_string(char *s)
{
	int i;
	char rev;
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	for(i = 0 ; i < length ; i++)
	{
		length--;
		rev = s[i];
		s[i] = s[length];
		s[length] = rev;
	}
}
