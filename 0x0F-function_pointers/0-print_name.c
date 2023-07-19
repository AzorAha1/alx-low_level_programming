#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_name - function name
 * @name: takes char
 * @f: function pointer
 * Description - this is the description
 * Return: return type
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
