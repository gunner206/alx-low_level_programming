#include "lists.h"

/**
 * add_node - a function that add a node
 * @head: node head
 * @str: node data
 *
 * Return: adrees of new element if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	unsigned int len = 0;
	list_t *N;

	for (i = 0 ; str[i] != '\0' ; i++)
		len++;

	N = malloc(sizeof(list_t));
	if (!N)
		return (NULL);
	N->str = strdup(str);
	N->len = len;
	N->next = *head;
	*head = N;

	return (*head);
}
