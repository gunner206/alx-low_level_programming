#include <stdio.h>

/**
 * main - entry pint
 * Return: always 0
 */
int main(void)
{
	int i;
	int sum;

	sum = 0;

	for (i = 3 ; i < 1024 ; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}