#include "lists.h"

/**
 * sum_listint -function calculates the sum of all the data in a listint_t list
 * @head: the first node
 * Return: the sum of the numbers
 */
int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *t = head;

	while (t)
	{
		add += t->n;
		t = t->next;
	}
	return (add);
}

