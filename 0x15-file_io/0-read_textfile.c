#include "main.h"

/**
 * read_textfile -  function that reads a text file and prints it
 * @filename : file path
 * @letters: number of letters
 *
 * Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd;
	ssize_t bytes;

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	bytes = read(fd, buf, letters);
	bytes = write(STDOUT_FILENO, buf, bytes);

	free(buf);
	close(fd);
	return (bytes);
}
