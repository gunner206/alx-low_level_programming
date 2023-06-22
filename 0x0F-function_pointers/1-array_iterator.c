#include "function_pointers.h"

/**
 * array_iterator - execites fun in each element of arr
 * @array: array elements
 * @size: size of array
 * @action: func to be executed
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0 ; i < size ; i++)
		{
			action(array[i]);
		}
	}
}
