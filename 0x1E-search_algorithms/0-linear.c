#include "search_algos.h"
/**
* linear_search - function name
* @array: the array
* @size: size of array
* @value: the value to find
* Description - using linear search to search for value
* Return: returns int
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			return (value);
		}
	}
	return (-1);
}
