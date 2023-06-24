#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print 10 times the numbers
 * @void: takes nothing
 * Description - this is the description
 * Return: return value type
 */
void more_numbers(void)
{
	int i;
	int a;

	for (i = 0; i < 10; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			printf("%d", a);
		}
		printf("\n");
	}
}
