#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: first integer
 * @max: last value of integer
 * Return: pointer to newly creted array
 * otherwise: If min > max, return NULL
 *            If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *a, i, s;

	if (min > max)
		return (NULL);
	s = max - min + 1;
	a = malloc(sizeof(int) * s);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < s; i++)
		a[i] = min++;
	return (a);
}
