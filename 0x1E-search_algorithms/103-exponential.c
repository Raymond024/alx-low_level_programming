#include "search_algos.h"

int binary_search_helper(int *array, int value,
			 size_t low, size_t high);
size_t mini(size_t a, size_t b);

/**
 * mini - returns the minimum of two size_t numbers
 * @y: first value
 * @x: second value
 * Return: `x` if lower or equal to `y`, `y` otherwise
 */
size_t mini(size_t x, size_t y)
{
	return (x <= y ? x : y);
}

/**
 * binary_search - searches for a value in an integer array
 * return lowest value using binary search algorithm
 * @array: pointer to first element of array
 * @val: value to search
 * @lowest: starting index
 * @highest: ending index
 * Return: index containing `val`, or -1 if `val` not found or
 * `array` is NULL
 */
int binary_search_helper(int *array, int val,
			 size_t lowest, size_t highest)
{
	size_t mid, x;

	if (!array)
		return (-1);

	while (lowest <= highest)
	{
		mid = (lowest + highest) / 2;
		printf("Searching in array: ");
		for (x = lowest; x <= highest; x++)
			printf("%i%s", array[x], x == highest ? "\n" : ", ");
		if (array[mid] < val)
			lowest = mid + 1;
		else if (array[mid] > val)
			highest = mid - 1;
		else
			return ((int)mid);
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array
 * using an exponential search algorithm
 * @array: pointer to first element of array
 * @size: number of elements
 * @value: value to search
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t l, h, b = 1;

	if (!array || size == 0)
		return (-1);

	while (b < size && array[b] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       b, array[b]);
		b *= 2;
	}

	l = b / 2;
	h = mini(b, size - 1);

	printf("Value found between indexes [%lu] and [%lu]\n", l, h);
	return (binary_search_helper(array, value, l, h));
}
