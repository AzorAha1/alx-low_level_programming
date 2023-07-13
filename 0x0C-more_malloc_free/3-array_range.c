#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - function name
 * @min: takes int
 * @max: takes unsigned int
 * Description - this is the description
 * Return: return type
 */
int *array_range(int min, int max)
{
	int i;
	int *p;
	int total;

	if (min > max)
	{
		return (NULL);
	}
	total = max - min + 1;
	p = (int *)calloc(total, sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		p[i - min] = i;
	}
	return (p);
}
