#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: functin that compares element of array
 * Return: index if succes -1 if it fails
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && size && cmp)
	{
		for (i = 0 ; i < size ; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
