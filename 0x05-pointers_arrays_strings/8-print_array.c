#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * puts_half - prints half
 * @str: char str
 * Description - this is the description
 * Return: return value type
 */
void print_array(int *a, int n)
{
	int i;
	
	for (i = 0; i < n; i++)
	{	
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
