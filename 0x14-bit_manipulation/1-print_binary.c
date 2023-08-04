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
	unsigned bit = 1 << 31;
	unsigned int i;
	int mask;

	mask = 1;
	for (i = 1; i <= 32; i++)
	{
		if (n & bit)
		{
			mask = 0;
			printf("1");
		}
		else if (mask != 1)
		{
			printf("0");
		}
		n = n << 1;
	}
	if (mask)
	{
		printf("0");
	}
}
