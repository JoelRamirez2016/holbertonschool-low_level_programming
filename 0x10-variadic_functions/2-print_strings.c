#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of params
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	if (!separator)
		return;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char*);

		if (s)
			printf("%s", s);
		else
			printf("(nil)");

		if (i + 1 != n)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
