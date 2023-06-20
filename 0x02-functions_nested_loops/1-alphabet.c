#include <stdio.h>
#include "_putchar.c"
#include "main.h"
/**
 *  main - This is a description
 *
 *  Return: Always (Success)
 */
void print_alphabet(void);
void print_alphabet(void)
{
	char alpha;
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
		_putchar('\n');
	}
}

