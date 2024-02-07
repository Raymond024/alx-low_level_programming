#include "lists.h"
/**
 * add_nodeint - function adds new node at the beggining of linked list
 * @head: pointer to first node in linked list
 * @n: info to be add to new node
 * Return: address of new element, NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first;

	first = malloc(sizeof(listint_t));
	if (!first)
		return (NULL);
	first->n = n;
	first->next = *head;
	*head = first;
	return (first);
}
