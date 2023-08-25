#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end of lists_t
 * @head: pointer to a pointer to  list_t
 * @str: string to add as new node
 *
 * Return: the new node's address or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *t = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);
	n->str = strdup(str);
	n->len = len;
	n->next = NULL;
	if (*head == NULL)
	{
		*head = n;
		return (n);
	}
	while (t->next)
		t = t->next;
	t->next = n;
	return (n);
}
