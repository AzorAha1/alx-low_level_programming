#include <stdio.h>
/**
 * print_name - function name
 * @name: takes char
 * @f: function pointer
 * Description - this is the description
 * Return: return type
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
	{
		f(name);
	}
}
