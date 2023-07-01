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
	char *s = strdup(str);
	int i;
	unsigned int len = 0;
	list_t *N;

	for (i = 0 ; s[i] != '\0' ; i++)
		len++;

	N = malloc(sizeof(list_t));
	if (!N)
		return (NULL);
	N->str = s;
	N->len = len;
	N->next = *head;
	*head = N;

	return (*head);
}
