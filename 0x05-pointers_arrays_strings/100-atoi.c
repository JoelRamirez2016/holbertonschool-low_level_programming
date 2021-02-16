#include "holberton.h"

/**
 * _atoi - convert string to number
 * @s: string to convert
 * Return: string number to int format
 */

int _atoi(char *s)
{
	int c, sign = 1;
	unsigned int result = 0;

	for (c = 0; s[c] != '\0' ; c++)
		if (s[c] == '-')

			sign *= -1;

		else if (s[c] >= '0' && s[c] <= '9')

			result = (result * 10) + (s[c] - '0');

		else if (result)

			break;

	return (result * sign);
}
