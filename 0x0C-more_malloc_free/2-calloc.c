#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function name
 * @s1: takes char
 * @s2: takes char
 * @n: takes unsigned int
 * Description - this is the description
 * Return: return type
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *p;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(size);
	if (p == NULL)
	{
		return (NULL);
	}
	ptr = (char *)p;
	for (i = 0; i < size; i++)
	{
		 ptr[i] = (char)nmemb;
	}
	return (p);
}
