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
			if (j == 0)
			{
				printf("%d,", i * j);
			}
			else if (j == 9 && i * j < 10)
			{
				printf("  %d", i * j);
			}
			else if (j != 9 && i * j < 10)
			{
				printf("  %d,", i * j);
			}
			else if (j != 9 && j >= 10)
			{
				printf(" %d,", i * j);
			}
			else
			{
				printf(" %d", i * j);
			}
			}
		printf("\n");
	}
}
