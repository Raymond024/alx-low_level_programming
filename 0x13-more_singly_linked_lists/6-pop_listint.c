#include "lists.h"

/**
 * pop_listint -function deletes the head node of a linked list
 * @head: pointer to the head node
 * Return: the elements in node to be deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	int digit;

	if (!head || !*head)
		return (0);
	digit = (*head)->n;
	t = (*head)->next;
	free(*head);
	*head = t;
	return (digit);
}
