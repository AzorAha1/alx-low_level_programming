#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - function name
 * @s: parameter name
 * Description - this is the function description
 * Return: return type
 */
int is_palindrome(char *s)
{
	int i;
	int find_center = strlen(s) / 2;
	int s_len = strlen(s-1);

	for (i = 0; i < find_center; i++)
	{
		if (s[i] != s[s_len - 1 - i])
		{
			return (0);
		}
	}
	return (1);
}
