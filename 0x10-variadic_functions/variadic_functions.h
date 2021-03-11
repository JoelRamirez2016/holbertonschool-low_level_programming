#ifndef VAR_FUNS
#define VAR_FUNS

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct op
{
	char op;
	int (*f)(va_list);
} op_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
