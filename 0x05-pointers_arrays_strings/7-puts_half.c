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
	int n;

	l = strlen(str);
	n = (l - 1) / 2;
	for (i = n + 1; i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
