#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of the listint_t list
 * @head: pointer to the first element in the listint_t list
 * @n: integer added to the new list node
 *
 * Return: pointer to the new node, NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last;
	listint_t *temp = *head;

	last = malloc(sizeof(listint_t));
	if (!last)
		return (NULL);
	last->n = n;
	last->next = NULL;
	if (*head == NULL)
	{
		*head = last;
		return (last);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = last;
	return (last);
}


