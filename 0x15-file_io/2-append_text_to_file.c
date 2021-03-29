#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to the name of the file.
 * @text_content: content to append in the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t opening, writing, letters = 0;

	while (text_content && text_content[letters])
		letters++;

	if (!filename)
		return (-1);

	opening = open(filename, O_WRONLY | O_APPEND);

	writing = write(opening, text_content, letters);

	if (opening == -1 || writing == -1)
		return (-1);

	close(opening);

	return (1);
}
