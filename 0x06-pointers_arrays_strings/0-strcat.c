#include "holberton.h"
/**
 * _strcat - concatenates two strings
 * @dest: first string to concatenate and the final result
 * @src: second string to concatenate
 * Return: the full concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, size = 0, j = 0;

	while (dest[i++])
		size++;


	for (j = 0; src[j] != '\0'; j++)
		dest[size++] = src[j];
	return (dest);
}
