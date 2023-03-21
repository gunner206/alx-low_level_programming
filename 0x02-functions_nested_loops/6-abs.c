#include "main.h"

/**
 * _abs - gives the absolute value of an integer
 * Return: always a
 * @i: parameter
 */
int _abs(int i)
{
	if (i < 0)
		i = -(i);
	else if (i >= 0)
		i = i;
	return (i);
}
