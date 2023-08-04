#include <stdio.h>
#include "main.h"
/**
 * print_binary - function name
 * @b: char b
 * Description - converting binary to unsigned int
 * Return: return unsigned int
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;

	for (i = 1UL << 31; i > 0; i = i / 2)
	{
		if (n & i)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
}
