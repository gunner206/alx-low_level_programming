#include "lists.h"

/**
 * add_nodeint_end - add a node at end
 * @head: node head
 * @n: node data
 *
 * Return: node adress
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *N;
	listint_t *temp = *head;

	N = malloc(sizeof(listint_t));

	if (!N)
		return (NULL);

	N->n = n;
	N->next = NULL;

	if (*head == NULL)
	{
		*head = N;
		return (N);
	}
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = N;
	return (N);
}
