#include<stdio.h>
#include<string.h>
#include<ctype.h>
/**
 * leet - function to replace
 * @p: this takes char
 * Description - uppercase
 * Return: this this the return type
 */
char *leet(char *p)
{
	int i;
	int j;
	char leet[] = "aAeEoOtTlL";
	char leet_replace[] = "4433007711";

	for (i = 0;  p[i] != '\0'; i++)
	{
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
