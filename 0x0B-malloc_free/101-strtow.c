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
	int counter;
	char **alloc_words;
	int i;
	
	i = 0;
	counter = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str_piece != NULL)
	{
		counter++;
		str_piece = strtok(NULL, " ");
	}
	alloc_words = (char **)malloc(counter * sizeof(char *));
	dub_str = strdup(str);
	str_piece = strtok(dub_str, " ");

	while (str_piece != NULL)
	{
		alloc_words[i] = strdup(str_piece);
		str_piece = strtok(NULL, " ");
		i++;
	}
	for (i = 0; i < counter; i++)
	{
		printf("%s\n" , alloc_words[i]);
		str_piece = strtok(NULL, " ");
	}
	return (alloc_words);
}
