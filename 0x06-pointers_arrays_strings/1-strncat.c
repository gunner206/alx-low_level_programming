#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 * @dest: s1
 * @src: s2
 * @n: bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dstlen = 0;
	int srclen = 0;

	for (i = 0 ; dest[i] != '\0' ; i++)
		dstlen++;
	for (i = 0 ; src[i] != '\0' ; i++)
		srclen++;
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	dest[dstlen + i] = src[i];
	dest[dstlen + i] = '\0';
	return (dest);
}
