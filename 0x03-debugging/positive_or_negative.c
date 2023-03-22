#include "main.h"

/**
 * positive_or_negative - check the nuber if its positive or negative
 * Return: void
 * @i: number to be checked
 */
void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
}
