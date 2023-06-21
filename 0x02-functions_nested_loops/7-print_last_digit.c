#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - print last digit of a  number.
 * @n: takes input
 *
 * Description - this is the description
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar('0' + last_digit);
	return (last_digit);
}
