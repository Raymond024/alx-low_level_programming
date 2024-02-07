#include "lists.h"
#include <stdio.h>
size_t looped_list(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - Counts the different number
 * of nodes in a linked list
 * @head: A pointer to the first node
 * Return: the number of different nodes
 * Otherwise - NULL
 */
size_t looped_list(const listint_t *head)
{
	const listint_t *x, *y;
	size_t n = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	x = head->next;
	y = (head->next)->next;
	while (y)
	{
		if (x == y)
		{
			x = head;
			while (x != y)
			{
				n++;
				x = x->next;
				y = y->next;
			}
			x = x->next;
			while (x != y)
			{
				n++;
				x = x->next;
			}
			return (n);
		}
		x = x->next;
		y = (y->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - function prints out a linked list
 * @head: A pointer to the first node
 * Return: The number of nodes in the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t no, indx = 0;

	no = looped_list(head);
	if (no == 0)
	{
		for (; head != NULL; no++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (indx = 0; indx < no; indx++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (no);
}
