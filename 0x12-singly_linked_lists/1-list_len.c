#include "lists.h"

/**
 * list_len - a function that returns number of eleme
 * @h: list node
 * Return: num of elem
 */
size_t list_len(const list_t *h)
{
	size_t sum = 0;

	while (h != NULL)
	{
		sum++;
		h = h->next;
	}
	return (sum);
}
