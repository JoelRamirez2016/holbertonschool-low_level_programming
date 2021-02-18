#include "holberton.h"
/**
 * _strncpy - copy one string
 * @dest: string to destiny
 * @src: string from copy
 * @n: number of max bytes for get from src
 * Return: the string copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	if (i < n)
		dest[i] = '\0';
	return (dest);
}
