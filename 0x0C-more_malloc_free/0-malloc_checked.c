#include "main.h"

/**
 * *malloc_checked - function that allocates memory using malloc
 * @b: integer
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (p == 0)
	{
		exit(98);
	}
	return (p);
}
