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
	char rev[] = strrev(s);

	puts(rev);
}
