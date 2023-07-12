#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_grid - function name
 * @grid: takes int
 * @height: takes int
 * Description - this is the description
 * Return: return type
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

