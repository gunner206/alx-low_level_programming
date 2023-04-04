#include "main.h"

/**
 * *_memset -  fills memory with a constant byte.
 * @s: memorie
 * @b: constant bytes
 * @n: nuber of bytes
 * Return: memorie
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0 ; n > 0 ; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
