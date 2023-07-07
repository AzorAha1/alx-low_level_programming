#include <stdio.h>
#include "main.h"

/**
 * _isdigit - check for digit.
 * @c: takes input
 *
 * Description - this is the description
 * Return: return value type
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
