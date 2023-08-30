#include <stdio.h>
#include "lists.h"

/**
 * listint_len - prints ou the number of elements in a linked list
 * @h: pointer to the list's first node
 *
 * Return: the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
