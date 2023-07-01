#include "lists.h"

/**
 * add_node_end - add not at the end
 * @head: node head
 * @str: node data
 *
 * Return: adrees of last node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *N;
	list_t *linkedlist = *head;

	while (str[len])
		len++;

	N = malloc(sizeof(list_t));

	if (!N)
		return (NULL);

	N->str = strdup(str);
	N->len = len;
	N->next = NULL;

	if (*head == NULL)
	{
		*head = N;
		return (N);
	}
	while (linkedlist->next != NULL)
		linkedlist = linkedlist->next;

	linkedlist->next = N;

	return (N);
}
