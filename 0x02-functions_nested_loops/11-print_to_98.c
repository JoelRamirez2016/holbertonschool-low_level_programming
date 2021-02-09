#include <stdio.h>

/**
 * main - Entry point
 * Description: print 9 times table in certain format 
 * Return: Always 0 (Success)
 */
int main(void)
{
    // print_to_98(0);
    // print_to_98(98);
    // print_to_98(120);
    // print_to_98(81);
    print_to_98(-10);
    return (0);
}

void print_to_98(int n)
{
    int i;
    for (i = n; i < 98; i++)
        printf("%d, ", i);
    
    for (i = n; i > 98; i--)
        printf("%d, ", i);
    
    printf("98\n");
}
