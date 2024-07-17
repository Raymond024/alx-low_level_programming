#include "search_algos.h"
/**
 * jump_list - Searching for an algorithm in a sorted singly linked list
 * @list: A pointer to the  head of the linked list
 * @size: The number of nodes in the list
 * @value: The value to search
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *         Otherwise, a pointer to the first node
 * Description: Prints a value every time it is compared in the list
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t st, st_size;
	listint_t *node, *jump;

	if (list == NULL || size == 0)
		return (NULL);

	st = 0;
	st_size = sqrt(size);
	for (node = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		node = jump;
		for (st += st_size; jump->index < st; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
