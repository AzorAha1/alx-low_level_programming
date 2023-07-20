#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * array_iterator - function name
 * @array: takes int pointer
 * @size: size_t
 * @action: function pointer
 * Description - this is the description
 * Return: return type
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;

	va_list arguments;
	va_start(arguments, n);
	for (i = 0; i < n; i++)
	{
		int x = va_arg(arguments, unsigned int);
		sum += x;
	}
	va_end(arguments);
	return (sum);
}
