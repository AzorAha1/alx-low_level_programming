#include <stdio.h>
#include <string.h>
#include <math.h>
/**
 * _sqrt_recursion - factorial
 * @n: takes int
 * Description - function
 * Return: return type
 */
int _sqr(int number, int root)
{
	if ((root * root) > number || number < 0)
	{
		return (-1);
	}
	else if ((root * root) == number)
	{
		return (root);
	}
	else 
	{
		return (_sqr(number, root + 1));
	}
}
int _sqrt_recursion(int n)
{
	return (_sqr(n, 0));
}
