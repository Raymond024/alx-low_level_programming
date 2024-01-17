#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - function frees 2 dimensional array
 * @grid: 2 dimensional array
 * @height: height of array
 * Return: NULL
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
