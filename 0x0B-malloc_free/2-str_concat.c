#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function name
 * @s1: takes char
 * @s2: takes char
 * Description - this is the description
 * Return: return type
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	size_t s1len;
	size_t s2len;
	size_t total;

	if (s1 == NULL || s2 == NULL || p = NULL)
	{
		return (NULL);
	}
	s1len = strlen(s1);
	s2len = strlen(s2);
	total = s1len + s2len;
	p = (char *)malloc(total + 1 * sizeof(char));
	strcat(p, s1);
	strcat(p, s2);
	return (p);
}
