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
	int fp;
	ssize_t getcount;
	char buffer[BUFFERSIZE + 1];

	if (filename == NULL)
	{
		return (0);
	}
	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		return (0);
	}
	getcount  = read(fp, buffer, letters);

	write(STDOUT_FILENO, buffer, getcount);
	close(fp);
	return (getcount);
}
