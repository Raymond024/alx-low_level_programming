#include "function_pointers.h"
/**
* int_index - function that searches for an integer
* @array: the array of integers
* @size: size of elements of array
* @cmp: pointer to function to be used to compare
* Return: 0 if size <=0, no element return -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
