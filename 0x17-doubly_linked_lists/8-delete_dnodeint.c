#include "lists.h"
/**
 * delete_dnodeint_at_index - function deletes the node at
 * index dlistint_t linked list
 * @head: head
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ha;
	dlistint_t *hb;
	unsigned int x;

	ha = *head;
	if (ha != NULL)
		while (ha->prev != NULL)
			ha = ha->prev;
	x = 0;
	while (ha != NULL)
	{
		if (x == index)
		{
			if (x == 0)
			{
				*head = ha->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				hb->next = ha->next;
				if (ha->next != NULL)
					ha->next->prev = hb;
			}
			free(ha);
			return (1);
		}
		hb = ha;
		ha = ha->next;
		x++;
	}
	return (-1);
}
