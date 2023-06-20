#include <stdio.h>
#include "main.h"

/**
 * _islower - check upper or lowercase.
 * @c - takes input
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

