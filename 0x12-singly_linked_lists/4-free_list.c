#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - frees up the linked list_t
 * @head: list_t that is to be freed
 * Return: void
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *temp = head;
	head = head->next;
	free(temp);
	}
}

