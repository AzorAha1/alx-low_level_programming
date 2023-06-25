#include <stdio.h>
#include "main.h"

/**
 * print_square - print size
 * @size: takes int size
 * Description - this is the description
 * Return: return value type
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, k;

		for (i = 1; i <= size; i++)
		{
			for (k = 1; k < size; k++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
}
