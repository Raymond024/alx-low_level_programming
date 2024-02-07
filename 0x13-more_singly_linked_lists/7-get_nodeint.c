#include "lists.h"

/**
 * get_nodeint_at_index -function returns the nth node of a linked list
 * @head: first node in the linked list
 * @index: index of the nth node
 * Return: pointer to the th node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *t = head;

	while (t && x < index)
	{
		t = t->next;
		x++;
	}
	return (t ? t : NULL);
}
