#include <stdio.h>
#include "main.h"

/**
 * print_line - print straight line
 * @n: takes int n
 * Description - this is the description
 * Return: return value type
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
