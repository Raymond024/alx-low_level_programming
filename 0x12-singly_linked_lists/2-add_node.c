#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function adds node to beggining of linked list
 * @head: pointer to pointer to list
 * @str: new string
 * Return: the address new element
 *         NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	unsigned int len = 0;

	while (str[len])
		len++;
	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);
	n->str = strdup(str);
	n->len = len;
	n->next = (*head);
	(*head) = n;
	return (*head);
}
