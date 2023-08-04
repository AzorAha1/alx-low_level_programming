#include <stdio.h>
/**
 * set_bit - name
 * @n: n
 * @index: index
 * Description -  this is the description
 * Return: return int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = *n  | 1ul << index;
	return (1);	
}
