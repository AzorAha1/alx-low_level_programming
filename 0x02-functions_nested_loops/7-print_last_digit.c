#include <stdio.h>
#include "main.h"

/**
 * _print_last_digit - print last digit of a  number.
 * @n: takes input
 *
 * Description - this is the description
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;
	_putchar(last_digit + n);
	return (0);
}
