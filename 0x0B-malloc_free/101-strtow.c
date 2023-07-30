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
	char *str_piece;

	if (str == NULL)
	{
		return (NULL);
	}
	dub_str = strdup(str);
	str_piece = strtok(dub_str, " ");

	while(str_piece != NULL)
	{
		printf("%s\n", str_piece);
		str_piece = strtok(NULL, " ");
	}
	return (0);
}
