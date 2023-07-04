#include "lists.h"

/**
 * listint_len -  returns the number of elements
 * @h: node
 *
 * Return: length
 */
size_t listint_len(const listint_t *h)
{
	size_t sum = 0;

	while (h != NULL)
	{
		sum++;
		h = h->next;
	}
	return (sum);
}
