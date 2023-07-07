#include "main.h"

/**
 * clear_bit - sets index value to 0
 * @n: number
 * @index: the index
 *
 * Return: 1 on succes -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index)) & *n;
	return (1);
}
