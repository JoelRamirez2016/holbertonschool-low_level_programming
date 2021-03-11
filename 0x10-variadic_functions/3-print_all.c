#include "variadic_functions.h"

void _printi(va_list);
void _prints(va_list);

void print_all(const char * const format, ...)
{
    va_list args;
    int i = 0;
    
    va_start (args, format);
    
    while (format[i])
    {
        _printi(args);
        printf("\n");
        i++;
    }
    
    va_end (args);                  

}

void _printi(va_list a)
{
    printf("%i", va_arg(a, int));
}
void _prints(va_list a)
{
    printf("%s", va_arg(a, char*));
}
