#include <stdio.h>
#include "main.h"

/**
 * times_table - print last digit of a  number.
 * @void: takes nothing
 *
 * Description - this is the description
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			printf("%-5d", k);
		}
		printf("\n");
	}
}
