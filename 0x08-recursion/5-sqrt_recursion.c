#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - main function that returns
 *i the natural square root of a number
 * @n: number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - function that returns
 * the natural square root of a number
 * @n: nember
 * @i: square root
 * Return: the value of the square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
