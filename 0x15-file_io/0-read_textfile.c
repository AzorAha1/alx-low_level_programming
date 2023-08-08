#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile - function name
 * @filename: argument
 * @letters: argument
 * Description - read file and print to the output
 * Return: return
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buffer[1024];
	int fp;

	fp = open(filename, O_RDONLY);

	if (fp == -1)
	{
		close(fp);
		return (0);
	}
	letters = read(fp, buffer, sizeof(buffer) - 1);

	buffer[letters] = '\0';
	printf("%s", buffer);
	close(fp);
	return (letters);
}
