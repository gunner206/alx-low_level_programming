#include <stdio.h>

/**
 * main - entry point
 * @argc: int
 * @argv: lisr
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
		printf("%s\n", argv[i]);
	return (0);
}
