#include <stdio.h>

/**
 * main - Entry point
 * Description: print absolute value of n 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	putchar('0' + r);
	putchar('\n');
	return (0);
}

int _abs(int n ){
	if (n < 0)
		return n * -1
	return n;
}
