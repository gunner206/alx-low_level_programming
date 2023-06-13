#include "main.h"

/**
 * *_strdup - dupplicate a string
 * @str: string
 * Return: uplicated string
 */
char *_strdup(char *str)
{
	char *s;
	int length = 0;
	int i;

	if (str == NULL)
		return (NULL);
	for (i = 0 ; str[i] != '\0' ; i++)
		length++;

	s = malloc(sizeof(char) * length + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0 ; i < length ; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
