#include "lists.h"

/**
 * add_nodeint - add node at beggining
 * @head: node head
 * @n: node data
 *
 * Return: new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *N;

	N = malloc(sizeof(listint_t));
	if (N != NULL)
	{
		N->n = n;
		N->next = *head;
		*head = N;
	}
	return (*head);
}
