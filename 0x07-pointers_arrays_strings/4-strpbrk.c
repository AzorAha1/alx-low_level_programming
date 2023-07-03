#include <stdio.h>
#include <string.h>
/**
 * _strpbrk - strchr function
 * @s: takes char
 * @accept: takes char
 * Description - function
 * Return: return type
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
