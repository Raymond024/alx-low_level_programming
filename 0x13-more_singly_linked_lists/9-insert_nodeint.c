#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position in a list
 * @head: pointer to the lists's first node
 * @idx: index where new node is to be added
 * @n: data to added to the node
 *
 * Return: pointer to the new node or NULL if its not possible to be added
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *temp = *head;
	listint_t *count;

	count = malloc(sizeof(listint_t));
	if (!count || !head)
		return (NULL);
	count->n = n;
	count->next = NULL;
	if (idx == 0)
	{
		count->next = *head;
		*head = count;
		return (count);
	}
	for (a = 0; temp && a < idx; a++)
	{
		if (a == idx - 1)
		{
			count->next = temp->next;
			temp->next = count;
			return (count);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
