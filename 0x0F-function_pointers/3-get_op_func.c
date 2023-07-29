#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - function pointer
 * @s: char s
 * Description - this is the description
 * Return: return type
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"%", op_mod},
		{NULL, NULL},
	};
	int i;
	while (i)
	{
		if (*s != '+' || *s != '-' || *s != '/' || *s != '%' || *s != '*')
		{
			return (NULL);
		}
	}
	(*get_op_func(ops)(int, int));
	return (0);
}
