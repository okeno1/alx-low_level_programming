#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid - function for freeing 2D array memory
 *@grid: previously created 2D array
 *@height: rows of the 2D array
 *Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
