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
	while (s1 && (s1 == s2))
	{
		s1++;
		s2++;
	}
	return (s1 - s2);
}
