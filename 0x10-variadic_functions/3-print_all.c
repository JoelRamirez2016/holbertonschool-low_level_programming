#include "variadic_functions.h"

void _printc(va_list);
void _printi(va_list);
void _prints(va_list);
void _printf(va_list);

/**
 * print_all - print any type of variable
 * @format: types of the vars to print
*/

void print_all(const char * const format, ...)
{
	op_t ops[] = {
		{'c', _printc},
		{'i', _printi},
		{'f', _printf},
		{'s', _prints},
		{0, 0}
	};
	va_list args;
	int i = 0, j = 0;
	char *delimiter = "";

	va_start(args, format);

	while (format[i])
	{
		j = 0;
		while (ops[j].op)
		{
			if (ops[j].op == format[i])
			{
				printf("%s", delimiter);
				ops[j].f(args);
				delimiter = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(args);

	printf("\n");
}

/**
 * _printi - print integer of the list of arguments
 * @a: list of arguments
*/

void _printi(va_list a)
{
	printf("%i", va_arg(a, int));
}

/**
 * _printf - print float of the list of arguments
 * @a: list of arguments
*/

void _printf(va_list a)
{
	printf("%f", va_arg(a, double));
}

/**
 * _printc - print character of the list of arguments
 * @a: list of arguments
*/

void _printc(va_list a)
{
	printf("%c", va_arg(a, int));
}

/**
 * _prints - print string of the list of arguments
 * or nil if no arguments
 * @a: list of arguments
*/

void _prints(va_list a)
{
	char *s = va_arg(a, char*);

	if (!*s)
		s = "(nil)";
	printf("%s", s);
}
