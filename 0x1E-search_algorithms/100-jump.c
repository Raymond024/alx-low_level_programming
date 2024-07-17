#include "search_algos.h"
#include <math.h>

size_t mini(size_t x, size_t y);

/**
 * mini - returns the minimum of two siz_t numerals
 * @x: first value
 * @y: second value
 * Return: `a` if lower or equal to `b`, `b` otherwise
 */
size_t mini(size_t x, size_t y)
{
	return (x <= y ? x : y);
}

/**
 * jump_search - searches for a value in a sorted array
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t l, h, j;

	if (!array || size == 0)
		return (-1);

	j = sqrt(size);

	for (h = 0; h < size && array[h] < value;
	     l = h, h += j)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       h, array[h]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", l, h);

	for (; l <= mini(h, size - 1); l++)
	{
		printf("Value checked array[%lu] = [%d]\n", l, array[l]);
		if (array[l] == value)
			return (l);
	}

	return (-1);
}
