#include <stdio.h>
#include "main.h"

/**
 * swap_int - reset to 98
 * @a: takes int size
 * @b: takes int
 * Description - this is the description
 * Return: return value type
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
