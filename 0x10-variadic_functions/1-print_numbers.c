#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_numbers - function name
 * @n: takes int
 * @separator: char
 * Description - this is the description
 * Return: return type
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;
	va_list arguments;

	va_start(arguments, n);
	if (separator == NULL)
	{
		separator = "";
	}
	for (i = 0; i < n; i++)
	{
		if (i > 0)
		{
			printf("%s", separator);
		}
		x = va_arg(arguments, int);

		printf("%d", x);
	}
	va_end(arguments);
	printf("\n");
}
