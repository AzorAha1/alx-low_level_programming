#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - reset to 98
 * @n: takes int size
 * Description - this is the description
 * Return: return value type
 */
void reset_to_98(int *n)
{
	int a = 98;

	n = &a;
	printf("%d", *n);
}
