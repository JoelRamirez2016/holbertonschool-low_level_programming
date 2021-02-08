#include <stdlib.h>

/**
 * main - Entry point
 * Description: check character 
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
    int r;
    
    r = _isalpha('H');
    printf("%i", r);
    r = _isalpha('o');
    printf("%i", r);
    return (0);
}

int _isalpha(int c)
{
    // printf("%i", c);
    return ( (c > 65 && c < 90) || (c > 96 && c < 123)  );   
}
