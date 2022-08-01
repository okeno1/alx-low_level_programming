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
	unsighned int i, j;
	int **arrLoc;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arrLoc = (int **) malloc(sizeof(int *) * height);
	if (arrLoc == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arrLoc[i] = (int *) malloc(sizeof(int *) * width);
		if (arr[i] == NULL)
		{
			free(arrLoc);
			for (j = 0; j <= i; j++)
			{
				free(arrLoc[j]);
			}
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arrLoc[i][j] = 0;
		}
	}

	return (arrLoc);

}
