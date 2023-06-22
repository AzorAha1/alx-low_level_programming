#include<stdio.h>

/**
 * print_to_98 - print to 98
 * @n: takes input 
 *
 * Description - this is the description
 * Return: Always 0 (success)
*/
void print_to_98(int n)
{
	for (n; n>=98)
	{
		if (n == 98)
		{
			printf("%d", n);
		}
		printf("%d, ", n);
		printf("\n");
	}
}
