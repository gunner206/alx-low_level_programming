#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: file path
 * @text_content: content
 *
 * Return: 1 on succes -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int length = 0;
	int w;

	if (!filename)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, length);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);
	return (1);
}
