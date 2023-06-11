#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: always o
 */
int main(int argc, char **argv)
{
	int i;
	int money = atoi(argv[1]);
	int cents[] = {25, 10, 5, 2, 1};
	int leastcents = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0 ; i < 5 ; i++)
	{
		if (money >= cents[i])
		{
			leastcents += money / cents[i];
			money = money % cents[i];
		}
	}
	printf("%d\n", leastcents);
	return (0);
}
