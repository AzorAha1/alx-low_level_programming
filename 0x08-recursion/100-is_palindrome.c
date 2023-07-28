#include <stdio.h>
#include <string.h>

/**
 * palindrome_finder - function name
 * @first: checks string from start incrementing
 * @last: checks string from end decrementing
 * @str: str
 * Description - this is the description
 * Return: return int
 */
int palindrome_finder(int first, int last, char *str)
{
	if (first >= last)
	{
		return (1);
	}
	else if (str[first] != str[last])
	{
		return (0);
	}
	return (palindrome_finder(first + 1, last - 1, str));
}
/**
 * is_palindrome - function name
 * @s: parameter name
 * Description - this is the function description
 * Return: return type
 */
int is_palindrome(char *s)
{
	int s_len = strlen(s);

	return (palindrome_finder(0, s_len, s));
}
