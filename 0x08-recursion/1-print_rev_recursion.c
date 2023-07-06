#include <stdio.h>
#include <string.h>
/**
 * _print_rev_recursion - print string
 * @s: takes char
 * Description - function
 * Return: return type
 */
void _print_rev_recursion(char *s)
{
	int i;
	int l;

	l = strlen(s);
	for (i = l - 1; i <= 0; i--)
	{
		printf("%c", s[i]);
	}
}
