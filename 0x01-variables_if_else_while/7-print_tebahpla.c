#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: print reverse alphabet
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
    for (char c = 'z'; c >= 'a'; c--)
        putchar(c);
    putchar('\n');
    return (0);
}