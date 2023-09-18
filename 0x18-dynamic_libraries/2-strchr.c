#include <stdio.h>
#include <string.h>
/**
 * _strchr - strchr function
 * @s: takes char
 * @c: takes char
 * Description - function
 * Return: return type
 */
char *_strchr(char *s, char c)
{
	char *str = strchr(s, c);

	if (str)
	{
		return (str);
	}
	else
	{
		return (NULL);
	}
}
