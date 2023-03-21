#include "main.h"

/**
 * _isalpha - search for a character
 * Return: 1 if it found a character and o if not
 * @c: a parametere
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
