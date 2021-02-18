#include "holberton.h"
/**
 * _strncat - concatenates two strings
 * @dest: first string to concatenate and the final result
 * @src: second string to concatenate
 * @n: number of max bytes for get from src
 * Return: the full concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, size = 0, j = 0;

	while (dest[i++])
		size++;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[size++] = src[j];
	return (dest);
}
