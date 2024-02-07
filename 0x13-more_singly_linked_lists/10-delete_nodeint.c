#include "lists.h"
/**
 * delete_nodeint_at_index - function deletes node in list at a certain index
 * @head: pointer to the first node
 * @index: address to node to delete
 * Return: 1 (Success), or -1 (Failed)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t = *head;
	listint_t *original = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(t);
		return (1);
	}
	while (x < index - 1)
	{
		if (!t || !(t->next))
			return (-1);
		t = t->next;
		x++;
	}
	original = t->next;
	t->next = original->next;
	free(original);
	return (1);
}
