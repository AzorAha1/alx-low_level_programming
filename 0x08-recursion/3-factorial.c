#include <stdio.h>
#include <string.h>
/**
 * factorial - factorial
 * @n: takes int
 * Description - function
 * Return: return type
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return factorial(n * (n - 1));
	}
}
