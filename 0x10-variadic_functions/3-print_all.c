#include "variadic_functions.h"

/**
 * format_char - print char
 * @separator: separating
 * @args: argument pointer
 */
void format_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
 * format_int - print int
 * @separator: separating
 * @args: argument pointer
 */
void format_int(char *separator, va_list args)
{
	printf("%s%d", separator, va_arg(args, int));
}

/**
 * format_float - print float
 * @separator: separating
 * @args: argument pointer
 */
void format_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
 * format_string - string
 * @separator: separating
 * @args: argument pointer
 */
void format_string(char *separator, va_list args)
{
	char *x;

	x = va_arg(args, char *);
	printf("%s%s", separator, x ? x : "(nil)");
}

/**
 * print_all - print anything
 * @format: list of args
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	int j;
	char *separator = "";
	va_list args;
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};
	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
