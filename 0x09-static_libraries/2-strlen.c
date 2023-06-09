#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: parameter
 *
 * Return: always 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
