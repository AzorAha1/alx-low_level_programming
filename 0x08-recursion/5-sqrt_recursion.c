#include <stdio.h>
#include <string.h>
#include <math.h>
/**
 * _sqrt_recursion - factorial
 * @n: takes int
 * Description - function
 * Return: return type
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else 
	{
		return n * _sqrt_recursion(n - 1);
	}
}
