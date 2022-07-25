#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array of int
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: address of the newly allocated memory
 */

int **alloc_grid(int width, int height)
{
	int i, j, m, n;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
			grid[m][n] = 0;
	}
	return (grid);
}
