#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all elements of list t
 * @h: pointer to list
 * Return: the number of nodes in list
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		x++;
	}
	return (x);
}
