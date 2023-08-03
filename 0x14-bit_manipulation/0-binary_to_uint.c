#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * binary_to_uint - function name
 * @b: char b
 * Description - converting binary to unsigned int
 * Return: return unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int b_len;
	unsigned int sum;
	unsigned int multiplier;

	sum = 0;
	b_len = strlen(b);
	multiplier = 1;
	if (b == NULL)
	{
		return (0);
	}
	for (i = (b_len - 1); i >= 0; i--)
	{
		if (b[i] == '1')
		{
			sum += multiplier;
		}
		multiplier *= 2;
	}
	return (sum);
}
