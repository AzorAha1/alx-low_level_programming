#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * puts2 - print every other character
 * @str: char s
 * Description - this is the description
 * Return: return value type
 */
void puts2(char *str)
{
	int i;
	int l;

	l = strlen(str);
	for(i = 0; i < l; i += 2)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
