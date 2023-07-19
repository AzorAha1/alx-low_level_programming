#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - function name
 * @array: takes int pointer
 * @size: size_t
 * @action: function pointer
 * Description - this is the description
 * Return: return type
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
