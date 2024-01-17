#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function return two dimensional array
 * @width: width value
 * @height: height value
 * Return: pointer to 2 dimensional array,
 * NULL if failed
 */
int **alloc_grid(int width, int height)
{
	int **str;
	int i, c;

	if (width <= 0 || height <= 0)
		return (NULL);
	str = malloc(sizeof(int *) * height);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		str[i] = malloc(sizeof(int) * width);
		if (str[i] == NULL)
		{
			for (; i >= 0; i--)
				free(str[i]);
			free(str);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (c = 0; c < width; c++)
			str[i][c] = 0;
	}
	return (str);
}
