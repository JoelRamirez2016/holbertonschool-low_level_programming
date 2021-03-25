#include "holberton.h"

/**
 * get_endianness - checks the endianness
 * Return: value of the most significant bit
 */

int get_endianness(void)
{
	int num = 1;
	char *ed = (char *)&num;

	return (*ed);
}
