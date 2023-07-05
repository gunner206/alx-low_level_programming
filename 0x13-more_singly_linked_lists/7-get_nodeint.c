#include "lists.h"

/**
 * get_nodeint_at_index - a fonctune that return a specified node
 * @head: head node
 * @index: index of the wanted node
 *
 * Return: wanted node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
