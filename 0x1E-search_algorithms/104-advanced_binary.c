#include "search_algos.h"

int binary_recursion(int *array, int val, size_t low, size_t high);

/**
 * binary_recursion - helper to `advanced_binary`, recursively searches
 * for a value in an integer array
 * @array: pointer to first element of array to search
 * @val: value to search
 * @low: starting index
 * @high: ending index
 * Return: index containing `val`, or -1 if `val` not found or
 * `array` is NULL
 */
int binary_recursion(int *array, int val, size_t low, size_t high)
{
	size_t mid, x;

	if (!array)
		return (-1);

	mid = (low + high) / 2;
	printf("Searching in array: ");
	for (x = low; x <= high; x++)
		printf("%i%s", array[x], x == high ? "\n" : ", ");

	if (array[low] == val)
		return ((int)low);

	if (array[low] != array[high])
	{
		if (array[mid] < val)
			return (binary_recursion(array, val, mid + 1, high));
		if (array[mid] >= val)
			return (binary_recursion(array, val, low, mid));
	}
	return (-1);
}
/**
 * advanced_binary - searches for a value in a sorted array
 * using a binary search algorithm. Unlike `binary_search`, consistently
 *
 * @array: pointer to first element of array
 * @size: number of elements in array
 * @value: value to search
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t lowest = 0;
	size_t highest = size - 1;

	if (!array)
		return (-1);

	return (binary_recursion(array, value, lowest, highest));
}
