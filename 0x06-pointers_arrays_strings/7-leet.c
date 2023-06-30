#include<stdio.h>
#include<string.h>
#include<ctype.h>
/**
 * cap_string - function to capitalize
 * @p: this takes char
 * Description - uppercase
 * Return: this this the return type
 */
char *leet(char *p)
{
	int i;
	char *leet = "aAeEoOtT";
	char *leet_replace = "44330077";

	for (i = 0;  p[i] != '\0'; i++)
	{
		int j;
		for (j = 0; leet[j] != '\0'; j++)
		{
			if (p[i] == leet[j])
			{
				p[i] = leet_replace[j];
			}
		}
	}
	return (p);
}
