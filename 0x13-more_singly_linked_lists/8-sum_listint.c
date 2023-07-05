#include "lists.h"

/**
 * sum_listint - a function that sums all the list data
 * @head: head node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (!head)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
