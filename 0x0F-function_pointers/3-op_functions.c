#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - add fonction
 * @a: integer 1
 * @b: integer 2
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substraction fonction
 * @a: integer 1
 * @b: integer 2
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication fonction
 * @a: integer 1
 * @b: integer 2
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division fonction
 * @a: integer 1
 * @b: integer 2
 * Return: result
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder fonction
 * @a: integer 1
 * @b: integer 2
 * Return: result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
