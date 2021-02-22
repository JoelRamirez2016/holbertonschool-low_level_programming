#include "holberton.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer of pointer to save value
 * @to: pointer with the value
 */

void set_string(char **s, char *to)
{
	*s = to;
}

