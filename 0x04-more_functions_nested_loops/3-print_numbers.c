#include <stdio.h>
#include "main.h"
#include "_putchar.c"
/**
 * print_numbers - print from 0-9
 * @void: takes nothing
 * Description - this is the description
 * Return: return value type
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i);
		_putchar('\n');
	}

}
