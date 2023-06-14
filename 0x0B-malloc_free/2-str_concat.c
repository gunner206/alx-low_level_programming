#include "main.h"

/**
 * *str_concat -  a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: str
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j;
	int s1len = 0;
	int s2len = 0;
	int size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0 ; s1[i] != '\0' ; i++)
		s1len++;
	for (i = 0 ; s2[i] != '\0' ; i++)
		s2len++;
	size = s1len + s2len + 1;
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);

	for (i = 0 ; i < s1len ; i++)
		str[i] = s1[i];
	for (j = 0 ; j < s2len ; j++)
		str[i + j] = s2[j];
	str[i + j] = '\0';
	return (str);
}
