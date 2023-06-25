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

	for (i = 0; i <= 100; ++i)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i == 100)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
