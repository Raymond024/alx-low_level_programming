#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints the elements of linked list listint_t
 * @h: pointer to the first node of the list
 *
 * Return: elements in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	
	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
