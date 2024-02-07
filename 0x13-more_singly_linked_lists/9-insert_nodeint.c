#include "lists.h"
/**
 * insert_nodeint_at_index - function inserts a new node in a linked list
 * @head: pointer to the first node
 * @idx: index where node goes
 * @n: data to insert in the new node
 * Return: pointer to address to new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *first;
	listint_t *t = *head;

	first = malloc(sizeof(listint_t));
	if (!first || !head)
		return (NULL);
	first->n = n;
	first->next = NULL;
	if (idx == 0)
	{
		first->next = *head;
		*head = first;
		return (first);
	}
	for (x = 0; t && x < idx; x++)
	{
		if (x == idx - 1)
		{
			first->next = t->next;
			t->next = first;
			return (first);
		}
		else
			t = t->next;
	}
	return (NULL);
}
