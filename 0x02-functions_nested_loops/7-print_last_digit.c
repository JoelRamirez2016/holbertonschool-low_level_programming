#include <stdio.h>

/**
 * main - Entry point
 * Description: print last digit with absolute value 
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


int print_last_digit(int n){
	printf("%i", n%10);
	return (n%10);
}
