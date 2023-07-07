#include "main.h"
/**
 * set_bit - set the value of a bit to 1
 * @n: number
 * @index: the index
 *
 * Return: -1 if fail 1 on succes
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (1UL << index) | *n;
	return (1);
}
