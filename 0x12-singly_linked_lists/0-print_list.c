#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements of the linked list
 * @h: linked list to be printed
 * Return: the elements in the linked list
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u} %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}

