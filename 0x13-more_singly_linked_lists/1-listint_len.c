#include "lists.h"
/**
 * listint_len - function return the number of elements in linked list
 * @h: linked list
 * Return: number of nodes in linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
