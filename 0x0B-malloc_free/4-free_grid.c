#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - function name
 * @width: takes int
 * @height: takes char
 * Description - this is the description
 * Return: return type
 */
free_grid(int **grid, int height)
{
	int i;
	int j;
	int **p;
	
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = (int **)malloc(height * sizeof(int *));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = (int *)malloc(width * sizeof(int));
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			free(grid[j]);
			p[i][j] = 0;
		}
	}
	free(p);
}

