#include <stdio.h>
#include "main.h"

/**
 * _isalpha - check alphabets.
 * @c: takes input
 *
 * Description - this is the description
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if (c > 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
