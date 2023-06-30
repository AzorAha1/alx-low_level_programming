#include<stdio.h>
#include<string.h>
#include<ctype.h>
/**
 * cap_string - function to capitalize
 * @p: this takes char
 * Description - uppercase
 * Return: this this the return type
 */
char *cap_string(char *p)
{
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (i == 0 || !isalpha(p[i - 1]))
		{
			if(islower(p[i]))
			{
				p[i] = toupper(p[i]);
			}
		}
	}
	return (p);
}
