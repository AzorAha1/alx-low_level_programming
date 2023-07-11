#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function name
 * size: takes int
 * c: takes char
 * Description - this is the description
 * Return: return type
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = (char*)malloc(size * sizeof(char));

	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return ptr;
}
