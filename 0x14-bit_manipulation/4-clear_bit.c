#include<stdio.h>
/**
 * clear_bit - name
 * @n: n
 * @index: index
 * Description - this is the description
 * Return: return type
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = *n & (~1 << index);
	return (1);
}
