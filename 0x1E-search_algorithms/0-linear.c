#include "search_algos.h"
/**
  * linear_search - Searches for a value in an array
  * @array: A pointer to the first element
  * @size: The number of elements
  * @value: The value to search
  * Return: If the value is not present or the array is NULL, -1.
  *         else, the first index where the value is located
  * Description: Prints a value every time it is compared
  */
int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}
	return (-1);
}
