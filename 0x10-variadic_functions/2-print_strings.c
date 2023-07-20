#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings - function name
 * @n: takes int
 * @separator: char
 * Description - this is the description
 * Return: return type
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;
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
		x = va_arg(arguments, char*);

		printf("%s", x);
	}
	va_end(arguments);
	printf("\n");
}
