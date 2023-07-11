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
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **p;
	size_t total;

	total = width + height;
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = (int **)malloc(total * sizeof(int *));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = (int **)malloc(width * sizeof(int));
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
