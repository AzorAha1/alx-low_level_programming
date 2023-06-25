#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - print diagonally
 * @n: takes int n
 * Description - this is the description
 * Return: return value type
 */
void print_diagonal(int n)
{
        if (n <= 0)
        {
                _putchar('\n');
        }
        else
        {
                int i;

                for (i = 1; i <= n; i++)
                {
                        _putchar('\\');
			_putchar('\n');
			_putchar(' ');
                }
                _putchar('\n');
        }
}

