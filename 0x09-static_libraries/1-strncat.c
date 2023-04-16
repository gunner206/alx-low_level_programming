#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 * @dest: s1
 * @src: s2
 * @n: bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
/*
 * {
 *	int srclen = 0;
 *	int destlen = 0;
 *	int i;
 *
 *	for (i = 0 ; dest[i] != '\0' ; i++)
 *		destlen++;
 *	for (i = 0 ; src[i] != '\0' ; j++)
 *		srclen++;
 *	for (i = 0; i < n ; i++)
 *		dest[destlen + i] = src[i];
 *	return (dest);
 *
 * }
 */
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

