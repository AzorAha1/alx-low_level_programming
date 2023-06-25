#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - print diagonally
 * @n: takes int n
 * Description - this is the description
 * Return: return value type
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i,k;

		for (i = 1; i <= n; i++)
		{
			for (k = 1; k < i; k++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
