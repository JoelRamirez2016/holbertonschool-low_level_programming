#include "holberton.h"

/**
 * print_exception - print error message and exit program
 * @exitcode: exit code to finish the program
 * @arg: argument to complete the error message
 */

void print_exception(int exitcode, char *arg)
{
	switch (exitcode)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			break;
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg);
			break;
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg);
			break;
	}
	exit(exitcode);
}
/**
 * close_file - close the file f or print error if its failed
 * @f: number to identify the file
 */

void close_file(int f)
{
	int c = close(f);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", f);
		exit(100);
	}
}

/**
 * main - copy the content of a file in another
 * @argc: number of arguments
 * @argv: arguments of the program
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	ssize_t opening_f1, opening_f2, reading, writing;
	char buff[1024];

	if (argc != 3)
		print_exception(97, 0);

	opening_f1 = open(argv[1], O_RDONLY);

	if (opening_f1 == -1)
		print_exception(98, argv[1]);

	opening_f2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
			S_IWUSR | S_IRUSR | S_IWGRP | S_IRGRP | S_IROTH);

	do {
		reading = read(opening_f1, buff, 1024);
		writing = write(opening_f2, buff, reading);

		if (reading == -1)
			print_exception(98, argv[1]);
		if (writing == -1)
			print_exception(99, argv[2]);

	} while (reading > 0);

	close_file(opening_f1);
	close_file(opening_f2);
	return (0);
}
