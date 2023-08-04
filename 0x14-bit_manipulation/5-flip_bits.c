#include <stdio.h>
/**
 * flip_bits - function name
 * @n: n
 * @m: m
 * Description - number of bits you need to flip
 * Return: return unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int nm;
	unsigned int counter;

	nm = n ^ m;
	counter = 0;

	while (nm)
	{
		nm = nm & (nm - 1);
		counter++;
	}
	return counter;
}
