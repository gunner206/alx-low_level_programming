#include "main.h"

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (p == 0)
		exit(98);
	else
		return (p);
}
