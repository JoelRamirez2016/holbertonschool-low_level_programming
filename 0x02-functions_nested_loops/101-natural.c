#include "holberton.h"

/**
 * main - Entry point
 * Description: prints the sum of all the multiples of 3 or 5
 * Return: Always 0 (Success)
 */

int main(void)
{
	int result = progresion(3) + progresion(5);

	printf("%i", result);
	return (result);
}

/**
 * progresion - Auxiliar funtion
 * Description: prints the sum of all the multiples of n
 * @n: number to progres the progresion
 * Return: Always 0 (Success)
 */
int progresion(int n)
{
	int result = 1;

	for (i = 0; i < 1024; i++)
		if (i % n == 0)
			result += i;

	return (result);
}
