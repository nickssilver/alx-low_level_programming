#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 * previously created by your alloc_grid function
 *
 * @grid: double pointer to the grid
 * @height: height of the grid
 *
 * Return: address of the newly allocated memory
 */

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
