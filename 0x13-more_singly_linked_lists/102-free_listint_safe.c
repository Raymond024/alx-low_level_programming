#include "lists.h"
/**
 * free_listint_safe - function that frees a linked list
 * @h: pointer to the first node
 * Return: number of elements linked list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t leng = 0;
	int d;
	listint_t *t;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			t = (*h)->next;
			free(*h);
			*h = t;
			leng++;
		}
		else
		{
			free(*h);
			*h = NULL;
			leng++;
			break;
		}
	}
	*h = NULL;
	return (leng);
}
