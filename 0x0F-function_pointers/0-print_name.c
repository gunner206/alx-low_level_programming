#include "function_pointers.h"

/**
 * print_name - a fonction that prints aname
 * @name: string name
 * @f: the printing function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
