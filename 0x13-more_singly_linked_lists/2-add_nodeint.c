#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node to the begging of a linked list
 * @n: interger added to the  new node
 * @head: pointer to the first nide in the linked list
 *
 * Return: a pointer to the new node, NULL should it fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *one;

	one = malloc(sizeof(listint_t));
	if (!one)
		return (NULL);
	one->next = n;
	one->next = *head;
	*head = one;
	return (one);
}
