#include<stdio.h>
/**
 * get_bit - function name
 * @n: argument
 * @index: check the index
 * Description - get the value of a bit at an nth index
 * Return: return the value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	value = (n >> index) & 1;

	return (value);
	if (value == 0)
	{
		return (-1);
	}
	
}
