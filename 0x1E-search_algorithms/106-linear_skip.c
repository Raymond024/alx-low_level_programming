#include "search_algos.h"
/**
 * linear_skip - searches for a value conatined in a skip list
 *
 * @list: pointer to the head of the skip list
 * @value: value to search
 * Return: pointer on the first node where value is located, or NULL if list
 * is NULL or value not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *t = NULL, *s = NULL;

	if (!list)
		return (NULL);

	t = list;
	while (t && t->express && t->express->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n",
		       t->express->index, t->express->n);
		t = t->express;
	}
	s = t;
	while (s && s->next != s->express)
		s = s->next;
	if (t->express)
	{
		printf("Value checked at index [%lu] = [%i]\n",
		       t->express->index, t->express->n);
		printf("Value found between indexes [%lu] and [%lu]\n",
		       t->index, t->express->index);
	}
	else
		printf("Value found between indexes [%lu] and [%lu]\n",
		       t->index, s->index);

	while (t != stop && t->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n",
		       t->index, t->n);
		t = t->next;
	}
	printf("Value checked at index [%lu] = [%i]\n",
	       t->index, t->n);

	if (t == s)
		return (NULL);
	return (t);
}
