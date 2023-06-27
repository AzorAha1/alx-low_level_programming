#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * rev_string - reverse string
 * @s: char s
 * Description - this is the description
 * Return: return value type
 */

void rev_string(char *s)
{
	int l;
	char c;
	int i;

	l = strlen(s);
	for (i = 0; i < l / 2; i++)
	{
		c = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = c;
	}
}
