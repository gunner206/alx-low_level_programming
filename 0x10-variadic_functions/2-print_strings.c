#include "variadic_functions.h"

/**
 * print_strings - prints a string
 * @separator: separator
 * @n: number of elem
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *x;
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0 ; i < n ; i++)
	{
		x = va_arg(args, char*);
		printf("%s", x ? x : "nil");
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
