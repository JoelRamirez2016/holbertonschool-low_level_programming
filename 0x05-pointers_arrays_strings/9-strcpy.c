#include "holberton.h"

/**
 * _strcpy - copies the string pointed to by src
 * to the buffer pointed to by dest.
 * @dest: pointer to save the string
 * @src: string to save in desc
 * Return: the new value saved in dest
 */

char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; src[c] != '\0' ; c++)
		dest[c] = *(src + c);
	dest[c] = *(src + c);
	return (dest);
}
