#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the list first node
 *
 * Return: pointer to new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *old = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = old;
		old = *head;
		*head = next;
	}
	*head = old;
	return (*head);
}
