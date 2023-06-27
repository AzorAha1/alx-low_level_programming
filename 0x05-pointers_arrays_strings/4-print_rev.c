#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_rev - getting string length
 * @s: char s
 * Description - this is the description
 * Return: return value type
 */
void print_rev(char *s)
{
	int i;
	int l;
	char c;

	l = strlen(s);
	for (i = 0; i < l/2; i++)
	{
		c = s[i];
		s[i] = s[l-1-i];
		s[l-1-i] = c;
	}
	puts(s);
}
