#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function name
 * @s1: takes char
 * @s2: takes char
 * Description - this is the description
 * Return: return type
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
