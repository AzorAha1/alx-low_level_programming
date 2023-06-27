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

	l = strlen(s);
	for (i = l - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
