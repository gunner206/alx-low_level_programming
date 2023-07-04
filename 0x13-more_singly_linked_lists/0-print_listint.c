#include "lists.h"
#include <stddef.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: Node list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t sum = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		sum++;
	}
	return (sum);
}
