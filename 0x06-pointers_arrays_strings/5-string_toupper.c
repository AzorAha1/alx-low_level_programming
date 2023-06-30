#include<stdio.h>
#include<string.h>
#include<ctype.h>
/**
 * string_toupper - function to print upper case
 * @p: this takes char
 * Description - uppercase
 * Return: this this the return type
 */
char *string_toupper(char *p)
{
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] >= 97 && p[i] <= 122)
		{
			p[i] = toupper(p[i]);
		}
	}
	return (p);
}
