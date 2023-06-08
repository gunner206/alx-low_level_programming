#include "main.h"

int square_root(int n, int i);

/**
 * _sqrt_recursion - a fonction that returns the natural square root
 * @n: integer
 * Return: the value
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square_root(n, 0));
}

/**
 * square_root - a fonction that looks for the sqrt root
 * @n: integer
 * @i: iterator
 *
 * Return: square root
 */
int square_root(int n, int i)
{
	if ((i * i) > n)
		return (-1);
	else if ((i * i) == n)
		return (i);
	else
		return (square_root(n, i + 1));
}
