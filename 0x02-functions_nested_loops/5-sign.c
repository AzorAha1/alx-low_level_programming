#include <stdio.h>
#include "main.h"

/**
 * print_sign - print sign of number.
 * @n: takes input
 *
 * Description - this is the description
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		printf("+");
	}
	if (n == 0)
	{
		return (0);
		printf("0");
	}
	if (n < 0)
	{
		return (-1)
		printf("-");
	}
	return (0);
}

