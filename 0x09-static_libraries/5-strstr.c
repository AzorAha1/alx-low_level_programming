#include <stdio.h>
#include <string.h>
/**
 * _strstr - strchr function
 * @haystack: takes char
 * @needle: takes char
 * Description - function
 * Return: return type
 */
char *_strstr(char *haystack, char *needle)
{
	char *answer = strstr(haystack, needle);

	if (answer == NULL)
	{
		return (NULL);
	}
	else
	{
		return (answer);
	}
}
