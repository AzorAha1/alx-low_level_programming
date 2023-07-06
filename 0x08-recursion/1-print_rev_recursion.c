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
	if (*s == '\0')
	{
		return;
	}
	else
	{
		printf("%c", _print_rev_recursion(s + 1));
	}
}
