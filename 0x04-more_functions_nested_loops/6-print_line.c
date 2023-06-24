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
	int i = 0;
	char c = '_';

	if (n <= 0)
	{
		printf("\n");
	}
	else
	{
		for (; i < n; i++)
		{
			printf("%c", c);
		}
	}
}
