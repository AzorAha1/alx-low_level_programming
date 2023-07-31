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
	char **thewords;
	int  counter;
	int i;
	char **alloc;
	
	thewords = NULL;
	counter = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	dub_str = strdup(str);
	if (dub_str == NULL)
	{
		return (NULL);
	}
	thewords = (char **)malloc(sizeof(char *));
	if (thewords == NULL)
	{
		free(dub_str);
		return (NULL);
	}
	str_piece = strtok(dub_str, " ");

	while (str_piece != NULL)
	{
		char *output = strdup(str_piece);
		if (output == NULL)
		{
			for (i = 0; i < counter; i++)
			{
				free(thewords[i]);
			}
			free(thewords);
			free(dub_str);
			return (NULL);
		}
		alloc = realloc(thewords, (counter + 1) * sizeof(char *));
		if (alloc == NULL)
		{
			free(output);
			for (i = 0; i < counter; i++)
			{
				free(thewords[i]);
			}
			free(thewords);
			free(dub_str);
			return (NULL);
		}
		thewords = alloc;
		thewords[counter] = output;
		counter++;
		str_piece = strtok(NULL, " ");
	}
	free(dub_str);
	thewords = (char **)realloc(thewords, (counter + 1) * sizeof(char *));
	return (thewords);
}
