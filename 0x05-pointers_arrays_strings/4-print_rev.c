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
	char str[30] = *s;

	l = strlen(str);
	for (i = 0; i < l/2; i++)
	{
		c = str[i];
		str[i] = str[l-1-i];
		str[l-1-i] = c;
	}
	puts(str);
}
