#include "main.h"

/**
 * *malloc_checked - a function that allocates memory using malloc
 * @b: int
 * Return: pointer to the array initialized or null
 */
void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);
}
