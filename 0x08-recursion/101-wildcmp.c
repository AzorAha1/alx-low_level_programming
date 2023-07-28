#include <stdio.h>
#include <string.h>

/**
 * wildcmp_finder - name
 * @string1: parameter
 * @string2: parameter
 * Description - this is the description
 * Return: return type
 */
int wildcmp_finder(char *string1, char *string2)
{
	int checker;
	char *special_char = strchr(string2, '*');

	checker = strcmp(string1, string2);
	if (checker == 0)
	{
		return (1);
	}
	if (string2 == special_char)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (wildcmp_finder(string1 + 1, string2  - 1));
}
/**
 * wildcmp - function name
 * @s1: parameter
 * @s2:parameter
 * Description - this is the description
 * Return: returns int
 */
int wildcmp(char *s1, char *s2)
{
	return (wildcmp_finder(s1, s2));
}
