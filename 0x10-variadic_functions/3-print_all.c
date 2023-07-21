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
	int format_l;
	int i;

	i = 0;
	va_start(arguments, format);
	format_l = strlen(format);
	while (i < format_l)
	{
		if (i > 0)
		{
			printf(", ");
		}
		switch (format[i])
		{
			case 'c':
				print_char(arguments);
				break;
		}
		switch (format[i])
		{
			case 'i':
				print_int(arguments);
				break;
		}
		switch (format[i])
		{
			case 'f':
				print_double(arguments);
				break;
		}
		switch (format[i])
		{
			case 's':
				print_string(arguments);
				break;
			default:
				break;
		}
		i++;
	}
	va_end(arguments);
	printf("\n");
}