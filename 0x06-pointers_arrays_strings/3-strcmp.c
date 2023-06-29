#include<stdio.h>
#include<string.h>
/**
 * _strncpy - function to concatenate two strings with the use of n
 * @dest: this takes char
 * @src: this takes char
 * @n: this takes int
 * Description - this function concatenates two strings
 * Return: this this the return type
 */
int _strcmp(char *s1, char *s2)
{
	if (strcmp(s1, s2) < 0)
	{
		return (-15);
	}
	else if (strcmp(s1, s2) > 0)
	{
		return (15);
	}
	else
	{
		return (0);
	}
}
