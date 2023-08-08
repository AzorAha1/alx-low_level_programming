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

	fp = open(filename, O_RDONLY);

	if (fp == -1)
	{
		close(fp);
		return (0);
	}
	getcount  = read(fp, buffer, letters);

	buffer[letters] = '\0';
	write(STDOUT_FILENO, buffer, getcount);
	close(fp);
	return (getcount);
}
