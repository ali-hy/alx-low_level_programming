#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - allocates a grid of memory
 * @width: width of grid
 * @height: height of grid
 * Return: pointer to grid
 */
int **alloc_grid(int width, int height)
{
	int i, j, **res;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	res = malloc(sizeof(int *) * height);
	if (res == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		res[i] = malloc(sizeof(int) * width);
		if (res[i] == NULL)
		{
			while (i--)
			 free(res[i]);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			res[i][j] = 0;
		}
	}

	return (res);
}
