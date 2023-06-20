#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase.
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char alphax10;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alphax10 = 'a'; alphax10 <= 'z'; alphax10++)
		{
			putchar(alphax10);
		}
		printf("\n");
	}
}

