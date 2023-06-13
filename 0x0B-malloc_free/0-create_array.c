#include "main.h"

/**
 * *create_array - create array of hars
 * @size: size of array
 * @c: characther
 *
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	a = malloc(sizeof(char) * size);

	if (size == 0 || a == 0)
		return (NULL);
	for (i = 0 ; i < size ; i++)
		a[i] = c;
	return (a);
}
