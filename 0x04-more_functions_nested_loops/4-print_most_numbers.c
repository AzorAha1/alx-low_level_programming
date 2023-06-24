#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - print from 0-9 without 2 and 4
 * @void: takes nothing
 * Description - this is the description
 * Return: return value type
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			printf("%d", i);
		}
	}
	printf("\n");
}
