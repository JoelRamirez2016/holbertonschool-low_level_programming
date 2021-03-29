#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to the name of the file.
 * @letters: number of letters to read and print.
 * Return: actual number of chars printed, otherwise 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opening, reading, writing;
	char *buff = malloc(sizeof(char) * letters);

	if (!buff)
		return (0);

	opening = open(filename, O_RDONLY);
	reading = read(opening, buff, letters);
	writing = write(STDOUT_FILENO, buff, reading);

	if (writing == -1 || opening == -1 || reading == -1)
		writing = 0;

	free(buff);
	close(opening);

	return (writing);
}
