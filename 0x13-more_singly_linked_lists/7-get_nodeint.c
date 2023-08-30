#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - return the nth node of a linked list
 * @head: the first node of the list
 * @index: index of the node to be returned
 *
 * Return: pointer to the nth node or NULLif it doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int a = 0;

	while (temp && a < index)
	{
		temp = temp->next;
		a++;
	}
	return (temp ? temp : NULL);
}

