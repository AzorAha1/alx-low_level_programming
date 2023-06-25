#include <stdio.h>
#include "main.h"

/**
 * main - fizzbuzz
 * @void: takes nothing
 * Description - this is the description
 * Return: return value type
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
			putchar(' ');
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			putchar(' ');
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
			putchar(' ');
		}
		else
		{
			if (i == 100)
			{
				printf("%d", i);
			}
			else
			{
				printf("%d ", i);
			}

		}
	}
	printf("\n");
	return (0);
}
