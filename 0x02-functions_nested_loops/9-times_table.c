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
			if (j == 0)
			{
				printf("%d,", k);
			}
			else if (j == 9 && k < 10)
			{
				printf("  %d", k);
			}
			else if (j != 9 && k < 10)
			{
				printf("  %d,", k);
			}
			else if (j !=9 && j >= 10)
			{
				printf(" %d,", k);
			}
			else
			{
				printf(" %d", k);
			}
		
		}
		printf("\n");
	}
}
