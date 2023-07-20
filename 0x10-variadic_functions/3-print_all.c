#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
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
	char c;
	int integer;
	double flo;
	char* ch;

	i = 0;
	va_start(arguments, format);
	format_l = strlen(format);
	while (i < format_l)
	{
		if (format[i] == 'c')
		{
			c = va_arg(arguments, int);
			printf("%c", c);
		}
		else if (format[i] == 'i')
		{
			integer = va_arg(arguments, int);
			printf("%d", integer);
		}
		else if (format[i] == 'f')
		{
			flo = va_arg(arguments, double);
			printf("%f", flo);
		}
		else if (format[i] == 's')
		{
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
		i++;
	}
	va_end(arguments);
	printf("\n");
}
