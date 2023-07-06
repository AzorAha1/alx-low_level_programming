#include <stdio.h>
#include <string.h>
/**
 * _pow_recursion - pow
 * @x: takes int
 * @y: takes int
 * Description - function
 * Return: return type
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
