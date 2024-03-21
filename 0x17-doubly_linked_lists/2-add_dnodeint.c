#include "lists.h"

/**
 * add_dnodeint - function adds a new node at the beginning
 * of a dlistint_t list
 * @head: head
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *x;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	x = *head;

	if (x != NULL)
	{
		while (x->prev != NULL)
			x = x->prev;
	}
	new_node->next = x;
	if (x != NULL)
		x->prev = new_node;
	*head = new_node;
	return (new_node);
}
