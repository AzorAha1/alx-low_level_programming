#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	printf("\n");
}

