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
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t s1len;
	size_t s2len;
	size_t total;
	size_t s2vn;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s1len = strlen(s1);
	s2len = strlen(s2);
	if (n >= s2len)
	{
		s2vn = s2len;
	}
	else
	{
		s2vn = n;
	}
	total = s1len + s2vn;
	p = (char *)malloc((total + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	memset(p, 0, (total +1) * sizeof(char));
	strcat(p, s1);
	strcat(p, s2);
	return (p);
}
