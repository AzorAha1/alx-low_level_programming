#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _puts - getting string length
 * @str: char s
 * Description - this is the description
 * Return: return value type
 */
void print_rev(char *s)
{
	int l = strlen(s);

	for (int i = l - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
