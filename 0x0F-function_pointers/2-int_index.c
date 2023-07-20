#include <stdio.h>
#include <stdlib.h>
/**
 * cmp - function
 * @i: takes i
 * Description - description
 * Return: return type
 */
int cmp(int i)
{
	if (i > 0)
	{
		return (1);
	}
	return (-1);
}
/**
 * int_index - function name
 * @array: takes int pointer
 * @size: size_t
 * @cmp: function pointer
 * Description - this is the description
 * Return: return type
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}

	}
	return (-1);
}
