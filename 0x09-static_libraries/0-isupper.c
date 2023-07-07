#include <stdio.h>
#include "main.h"

/**
 * _isupper - check for uppercase.
 * @c: takes input
 *
 * Description - this is the description
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
