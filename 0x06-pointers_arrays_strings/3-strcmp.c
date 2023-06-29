#include<stdio.h>
#include<string.h>
/**
 * _strcmp - function to concatenate two strings with the use of n
 * @s1: this takes char
 * @s2: this takes char
 * Description - strcmp
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

	return (0);
}
