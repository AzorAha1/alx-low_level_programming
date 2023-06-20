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
		_putchar(n + '1')
	}
	if (n == 0)
	{
		_putchar(n + '0');
	}
	if (n < 0)
	{
		printf(n + '-1');
	}
	return (0);
}

