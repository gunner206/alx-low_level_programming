#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at given index
 * @idx: index
 * @head: node head
 * @n: node data
 *
 * Return: adress of node if fail null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *node;
	unsigned int i;

	node = malloc(sizeof(listint_t));
	if (!node || !*head)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	for (i = 0 ; temp && i < idx ; i++)
	{
		if (i == idx - 1)
		{
			node->next = temp->next;
			temp->next = node;
			return (node);
		}
		else
		{
			temp = temp->next;
		}
	}
	return (NULL);
}
