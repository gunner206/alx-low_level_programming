#include "main.h"

/**
 * *_memset -  fills a block of memory with a specified value
 * @s:pointer to the memory area to be filled
 * @b: the value to be copied
 * @n: number of times
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		s[i] = b;

	return (s);
}
/**
 * *_calloc - a function that allocates memory for an array
 * @nmemb: number element of an aray
 * @size: size of elemnt
 * Return: array initialized to 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == 0)
		return (NULL);

	_memset(ptr, 0, size * nmemb);

	return (ptr);
}
