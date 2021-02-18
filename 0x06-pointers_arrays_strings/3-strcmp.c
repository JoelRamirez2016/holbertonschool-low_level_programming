#include "holberton.h"
/**
 * _strcmp - compare two string
 * @s1: string to compare
 * @s2: string to compare
 * Return: the diference of chars's strings
 */
int _strcmp(char *s1, char *s2)
{

	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
