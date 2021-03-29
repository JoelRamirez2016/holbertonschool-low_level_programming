#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to the name of the file.
 * @letters: number of letters to read and print.
 * Return: actual number of chars printed, otherwise 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opening = open(filename, O_RDONLY);
	char *buff = malloc(sizeof(char) * letters);
	ssize_t reading = read(opening, buff, letters);
	ssize_t writing = write(STDOUT_FILENO, buff, reading);

	free(buff);
	close(opening);

	return (writing);
}
