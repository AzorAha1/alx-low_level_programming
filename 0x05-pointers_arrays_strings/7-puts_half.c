#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * puts_half - prints half
 * @str: char str
 * Description - this is the description
 * Return: return value type
 */
void puts_half(char *str)
{
	int i;
	int l;
	int h;
	int n;

	l = strlen(str);
	n = l - 1 / 2;
	h = l / 2;
	for (i = h; i < l; i++)
	{
		if (l % 2 == 0)
		{
			_putchar(str[i]);
		}
		else
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');

}
