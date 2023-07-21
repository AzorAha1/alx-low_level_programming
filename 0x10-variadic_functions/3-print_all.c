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
	printf("%s", ch);
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
	int format_l;

	format_l = strlen(format);
	i = 0;
	va_start(arguments, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				print_char(arguments);
				break;
			case 'i':
				print_int(arguments);
				break;
			case 'f':
				print_double(arguments);
				break;
			case 's':
				print_string(arguments);
				break;
		}
		if (i != format_l - 1 && (format[i] == 'c' || format[i] == 'i' ||
					format[i] == 'f' ||
					format[i] == 's'))
		{
			printf(", ");
		}
		i++;
	}
	va_end(arguments);
	printf("\n");
}
