#include "main.h"

/**
 * _isupper - checks for upper case character
 * Return: 1 if uppercase 0 otherwise
 * @c: parameter to be checked
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
