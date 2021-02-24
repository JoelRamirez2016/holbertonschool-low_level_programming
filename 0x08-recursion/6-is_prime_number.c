#include "holberton.h"

int is_prime(int n, int ac);

/**
 * is_prime_number - check if the input integer is a prime number
 * @n: number to check
 * Return: result in is_prime fun
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (is_prime(n, 2));
}
/**
 * is_prime - check if the input integer is a prime number
 * @n: number to check
 * @ac: temporal result
 * Return: 1 if the number is prime, otherwise 0
 */
int is_prime(int n, int ac)
{
	if (n % ac == 0)
		return (0);
	else if (ac < n)
		is_prime(n, ac + 1);
	return (1);
}
