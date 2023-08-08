#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
/**
 * read_textfile - function name
 * @filename: argument
 * @letters: argument
 * Description - read file and print to the output
 * Return: return
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fptr;
	char buffer[1024];
	size_t num_of_letters;

	fptr = fopen(filename, "r");

	if (fptr == NULL)
	{
		return (0);
	}
	if (fptr != NULL)
	{
		while(fgetc(fptr) != EOF)
		{
			printf("%s", buffer);
		}
	}
	if (filename == NULL)
	{
		return (0);
	}
	num_of_letters = fread(buffer, sizeof(char), letters, fptr);
	if (num_of_letters > 0)
	{
		buffer[num_of_letters] = '\0';
	}
	fclose(fptr);
	return (num_of_letters);
}
