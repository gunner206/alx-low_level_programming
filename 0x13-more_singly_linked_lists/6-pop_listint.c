#include "lists.h"

/**
 * pop_listint - a fonction that delets head node
 * @head: head node
 *
 * Return: head data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (!head || !*head)
		return (0);

	temp = (*head)->next;
	free(*head);
	(*head) = temp;

	return ((*head)->n);
}
