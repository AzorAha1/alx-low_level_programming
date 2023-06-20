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
		_putchar(1, '+');
	}
	if (n == 0)
	{
		_putchar(0, '0');
	}
	if (n < 0)
	{
		_putchar(-1, '-');
	}
	return (0);
}

