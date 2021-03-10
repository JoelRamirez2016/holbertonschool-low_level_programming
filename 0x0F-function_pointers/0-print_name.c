#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: string name to print
 * @f: print function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
