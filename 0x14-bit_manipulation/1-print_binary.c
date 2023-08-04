#include <stdio.h>
#include "main.h"
/**
 * print_binary - function name
 * @n: char b
 * Description - converting binary to unsigned int
 * Return: return unsigned int
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;
	int check;

	check = 0;
	for (i = 1UL << 31; i > 0; i >>= 1)
	{
		if (n & i)
		{
			printf("1");
			check = 1;
		}
		else if (check)
		{
			printf("0");
		}
	}
	if (check == 0)
	{
		printf("0");
	}
}
