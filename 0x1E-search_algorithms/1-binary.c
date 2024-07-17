#include "search_algos.h"
/**
  * binary_search - function Searches for a value in a sorted array
  * of integers using binary search.
  * @array: A pointer to the first element
  * @size: The number of elements
  * @value: The value to search
  * Return: If the value is not present or the array is NULL, -1.
  *         else, the index where the value is located.
  * Description: Prints the [sub]array being searched after each change.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t x, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		printf("Searching in array: ");
		for (x = l; x < r; x++)
			printf("%d, ", array[x]);
		printf("%d\n", array[x]);

		x = l + (r - l) / 2;
		if (array[x] == value)
			return (x);
		if (array[x] > value)
			r = x - 1;
		else
			l = x + 1;
	}
	return (-1);
}
