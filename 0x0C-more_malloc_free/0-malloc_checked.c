#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * malloc_checked - function name
 * @b: takes int
 * Description - this is the description
 * Return: return type
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
