#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - deletes the the first node of linked list
 * @head: pointer to the first node a linked list
 *
 * Return: the elements in the deleted node, 0 if its empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	int count;
	if (!head || !*head)
		return (0);
	count = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (count);
}
