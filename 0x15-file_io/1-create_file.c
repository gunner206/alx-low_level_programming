#include "main.h"

/**
 * create_file - a fonction that creates a file
 * @filename: file path
 * @text_content: content that will be written to file
 *
 * Return: -1 in fail 0 on succes
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int length = 0;
	int bytes;

	if (!filename)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0 ; text_content[length];)
			length++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bytes = write(fd, text_content, length);

	if (fd == -1 || bytes == -1)
		return (-1);

	close(fd);
	return (1);

}
