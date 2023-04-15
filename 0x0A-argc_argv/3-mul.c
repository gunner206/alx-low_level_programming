#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: int
 * @argv: lisr
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
	return (1);
	}
	else
	{
		mul  = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	}
	return (0);
}
