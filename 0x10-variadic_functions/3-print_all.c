#include "variadic_functions.h"

void _printc(va_list);
void _printi(va_list);
void _prints(va_list);
void _printf(va_list);

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

	va_start (args, format);

	while (format[i])
	{
		j = 0;
		while (ops[j].op)
		{
			if (ops[j].op == format[i])
			{
				ops[j].f(args);
				printf(", ");
			}
			j++;
		}
		i++;
	}

	va_end (args);

	printf("\n");
}

void _printi(va_list a)
{
	printf("%i", va_arg(a, int));
}
void _printf(va_list a)
{
	printf("%f", va_arg(a, float));
}
void _printc(va_list a)
{
	printf("%c", va_arg(a, int));
}
void _prints(va_list a)
{
	char *s = va_arg(a, char*);

	if (!*s)
		s = "(nil)";
	printf("%s", s);
}
