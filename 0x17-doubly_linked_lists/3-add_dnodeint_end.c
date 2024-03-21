#include "lists.h"
/**
 * add_dnodeint_end - function adds a new node at the end
 * of a dlistint_t list
 * @head: head
 * @n: value of the element
 * Return: address of new element or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *x;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	x = *head;
	if (x != NULL)
	{
		while (x->next != NULL)
			x = x->next;
		x->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	new_node->prev = x;
	return (new_node);
}
