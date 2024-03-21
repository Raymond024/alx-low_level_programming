#include "lists.h"
/**
 * insert_dnodeint_at_index - function inserts a new node at given position
 * @h: head
 * @idx: index of new node
 * @n: value of new node
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *header;
	unsigned int x;

	new_node = NULL;
	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		header = *h;
		x = 1;
		if (header != NULL)
			while (header->prev != NULL)
				header = header->prev;
		while (header != NULL)
		{
			if (x == idx)
			{
				if (header->next == NULL)
					new_node = add_dnodeint_end(h, n);
				else
				{
					new_node = malloc(sizeof(dlistint_t));
					if (new_node != NULL)
					{
						new_node->n = n;
						new_node->next = header->next;
						new_node->prev = header;
						header->next->prev = new_node;
						header->next = new_node;
					}
				}
				break;
			}
			header = header->next;
			x++;
		}
	}
	return (new_node);
}
