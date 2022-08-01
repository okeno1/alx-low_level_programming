#include <stdio.h>
#include <stdlib.h>

/**
 ***alloc_grid - function to return pointer of 2D array
 *@width: array rows
 *@height: array columns
 *Return: pointer of array or NULL
 */

int **alloc_grid(int width, int height)
{
	unsighned int size, i, j;
	int *arrLoc;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	size = (width * height) + 1;

	arrLoc = malloc(sizeof(int) * size);
	if (arrLoc == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			arrLoc[i][j] = 0;
		}
	}

	return (arrLoc);
}
