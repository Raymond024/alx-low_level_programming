#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - returns the sum of all the data in a linked list
 * @head: first node of the list
 *
 * Return: the sum of the data in the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
