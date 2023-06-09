#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: memory area
 * @src: memory area
 * @n: bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n;
	int j;

	for (j = 0 ; j < i ; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
