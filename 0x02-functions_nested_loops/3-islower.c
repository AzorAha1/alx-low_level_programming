#include <stdio.h>
#include "main.h"

/**
 * _islower - check upper or lowercase.
 * Description: 'the program's description'
 * @c - takes input
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

