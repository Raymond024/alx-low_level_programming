#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function returns number of elements in list
 * @h: pointer to list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
