#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes node at a given index in a list
 * @head: pointer to the list's first node
 * @index: index of node to be deleted
 *
 * Return: 1 if successful and -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *present = NULL;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (a < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		a++;
	}
	present = temp->next;
	temp->next = present->next;
	free(present);
	return (1);
}
