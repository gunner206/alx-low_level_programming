#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	int i = 0;
	int j;
	char *string;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	string = malloc(sizeof(char) * (i+1));

	if (string == NULL)
		return (NULL);

	for(j = 0 ; str[j] ;j++)
		string[j] = str[j];
	return (string);
}
