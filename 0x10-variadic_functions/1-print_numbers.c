#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of int to print
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i;

	if (!separator)
		return;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(args, int));

		if (i + 1 != n)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
