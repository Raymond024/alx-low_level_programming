#include "lists.h"
/**
 * add_nodeint_end - function adds node at the end of the linked list
 * @head: pointer to the last node in the list
 * @n: info to be added to the node
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last;
	listint_t *t = *head;

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
	while (t->next)
		t = t->next;
	t->next = last;
	return (last);
}
