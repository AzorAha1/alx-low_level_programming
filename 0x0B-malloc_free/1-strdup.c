#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function name
 * @str: takes char
 * Description - this is the description
 * Return: return type
 */
char *_strdup(char *str)
{
	char *p;
	if (str == NULL || p == NULL)
	{
		return (NULL);
	}
	p = strdup(str);
	return (p);
}
