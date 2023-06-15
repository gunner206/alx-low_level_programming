#include "main.h"

/**
 * *string_nconcat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j;
	unsigned int s1len = 0;
	unsigned int s2len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0 ; s1[i] != '\0' ; i++)
		s1len++;
	for (i = 0 ; s2[i] != '\0' ; i++)
		s2len++;
	if (n >= s2len)
		n = s2len;

	ptr = malloc(sizeof(char) * (s1len + n + 1));
	if (ptr == 0)
		return (NULL);

	for (i = 0 ; i < s1len ; i++)
		ptr[i] = s1[i];
	for (j = 0 ; j < n ; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';

	return (ptr);
}
