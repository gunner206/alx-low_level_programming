#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);


/**
 * create_buffer - Allocates 1024 bytes
 * @file: name of file
 *
 * Return: pointer to new buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}
/**
 * close_file - a fonction that closes file
 * @fd: file descriptor
 */
void close_file(int fd)
{
	int c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d", fd);
		exit(100);
	}
}
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 in succes -1 on fail
 */
int main(int argc, char *argv[])
{
	char *file_from = argv[1];
	char *file_to = argv[2];
	int fd1;
	int fd2;
	int r;
	int w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	fd1 = open(file_from, O_RDONLY);
	r = read(fd1, buffer, 1024);
	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (fd1 == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		w = write(fd2, buffer, r);
		if (fd2 == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(fd1, buffer, 1024);
		fd2 = open(file_to, O_WRONLY | O_APPEND);
	} while (r > 0);

	free(buffer);
	close_file(fd1);
	close_file(fd2);
	return (0);
}
