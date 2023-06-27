#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * rev_string - reverse string
 * @s: char s
 * Description - this is the description
 * Return: return value type
 */
void puts2(char *str)
{
	int i;
	int l;

	l = strlen(str);
	for(i = 0; i < l; i+=2)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
