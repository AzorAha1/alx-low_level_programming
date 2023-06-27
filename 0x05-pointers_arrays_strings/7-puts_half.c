#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * puts2 - print every other character
 * @str: char s
 * Description - this is the description
 * Return: return value type
 */
void puts_half(char *str)
{
	int i;
	int l;
	int n;

	l = strlen(str);
	n = l - 1 / 2;
	for (i = 0; i > 0; i+=5)
	{
		if (l % 2 == 0)
		{
			printf("%c", str[i]);
		}
		else
		{
			printf("%c", str[n]);
		}
	}

}
