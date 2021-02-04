#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: print all combinations of one digit
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	for (int i = 0; i < 10; i++)
    {
        putchar(i);
        if (i != '9'){
            putchar(",");
            putchar(" ");
        }
    }
    putchar('\n');
    return (0);
}
