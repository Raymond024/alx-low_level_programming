#include <stdio.h>
#include "lists.h"
/**
 * list_len - return the number of elements in a linked list
 * @h: pointer to linked list list_t
 *
 * Return: number of elements in list_t
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
