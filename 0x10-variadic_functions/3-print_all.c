#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_char - function name
 * @arguments: takes arguments
 * Description - this is the description
 * Return: return type
 */
void print_char(va_list arguments)
{
	char c;

	c = va_arg(arguments, int);
	printf("%c", c);
}
/**
 * print_int - function name
 * @arguments: takes arguments
 * Description - this is the description
 * Return: return type
 */
void print_int(va_list arguments)
{
	int i;

	i = va_arg(arguments, int);
	printf("%d", i);
}
/**
 * print_double - function name
 * @arguments: takes arguments
 * Description - this is the description
 * Return: return type
 */
void print_double(va_list arguments)
{
	double flo;

	flo = va_arg(arguments, double);
	printf("%f", flo);
}
/**
 * print_string - function name
 * @arguments: takes arguments
 * Description - this is the description
 * Return: return type
 */
void print_string(va_list arguments)
{
	char *ch;

	ch = va_arg(arguments, char*);
	if (ch == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", ch);
	}
}
/**
 * print_all - function name
 * @format: takes cahr
 * Description - this is the description
 * Return: return type
 */
void print_all(const char * const format, ...)
{
	va_list arguments;
	int i;
	int count;

	i = 0;
	count = 0;
	va_start(arguments, format);
	while (i < format[i])
	{
		if (format[i] == 'c' || format[i] == 'i' || format[i] == 's' || format[i] == 'f')
		{
			count++;
		}
		i++;
	}
	i = 0;
	while (format[i])
	{
		if (i > 0 && count > 0)
		{
			printf(", ");
		}
		if (format[i] == 'c')
		{
			print_char(arguments);
			count--;
		}
		else if (format[i] == 'i')
		{
			print_int(arguments);
			count--;
		}
		else if (format[i] == 'f')
		{
			print_double(arguments);
			count--;
		}
		else if (format[i] == 's')
		{
			print_string(arguments);
			count--;
		}
		i++;
	}
	va_end(arguments);
	printf("\n");
}
