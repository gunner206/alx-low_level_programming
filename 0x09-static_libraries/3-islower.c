#include "main.h"

/**
 * _islower - shearch for a lower case alphabete
 * Return: 0 or 1
 * @c: parameter to be printed
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
