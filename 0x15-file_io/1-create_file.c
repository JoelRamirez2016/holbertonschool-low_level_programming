#include "holberton.h"

/**
 * create_file - creates a file and his content
 * @filename: pointer to the name of the file.
 * @text_content: content of the new file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t opening, writing, letters = 0;

	while (text_content && text_content[letters])
		letters++;

	if (!filename)
		return (-1);

	opening = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);

	writing = write(opening, text_content, letters);

	if (opening == -1 || writing == -1)
		return (-1);

	close(opening);

	return (1);
}
