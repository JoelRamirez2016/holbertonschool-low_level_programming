#include <stdlib.h>

/**
 * main - Entry point
 * Description: check sign number 
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
    int r;
    r = print_sign(98);
    putchar(',');
    putchar(' ');
    putchar(r + '0');
    putchar('\n');
    r = print_sign(0);
    putchar(',');
    putchar(' ');
    putchar(r + '0');
    putchar('\n');
    r = print_sign(0xff);
    putchar(',');
    putchar(' ');
    putchar(r + '0');
    putchar('\n');
    return (0);
}

int print_sign(int n)
{
    if (n > 0)
    {
        putchar('+');
        return (1);  
    }
    if (n < 0)
    {
        putchar('-');
        return (-1);   
    }
    putchar('0');
    return (0); 
}
