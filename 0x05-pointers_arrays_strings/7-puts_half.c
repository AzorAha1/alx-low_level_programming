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
	int h;

	l = strlen(str);
	h = l / 2;
	for (i = h; i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
