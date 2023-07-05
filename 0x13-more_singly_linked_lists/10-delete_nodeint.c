#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a specefice node
 * @head: node head
 * @index: index of given node
 *
 * Return: (1) if succes (-1) if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = *head;
	listint_t *current = NULL;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !temp->next)
			return (-1);
		temp = temp->next;
		i++;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
