#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * int_abs - print sign of number.
 * @n: takes input
 *
 * Description - this is the description
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	int absolute = abs(n);
	printf("absolute of %d is %d", n, absolute);
	return (0);
}

