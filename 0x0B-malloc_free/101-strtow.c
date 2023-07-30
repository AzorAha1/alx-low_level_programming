#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * strtow - this is the function name
 * @str: argument
 * Description - this is the description
 * Return: return type
 */
char **strtow(char *str)
{
	char *dub_str;
	char *sep_str;

	if (str == NULL)
	{
		return (NULL);
	}
	dub_str = strdup(str);
	sep_str = strtok(dub_str, " ");

	while (sep_str != NULL)
	{
		sep_str = strtok(NULL, " ");
		printf("%s\n", sep_str);
	}
	return (0);
}
