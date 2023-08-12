#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * main - main function
 * @argc: argument
 * @argv: argument
 * Description - this is the description
 * Return: return type
 */
int main(int argc, char **argv)
{
	const char *file_from;
	const char *file_to;
	int fp, fp2;
	char buffer[1024];
	ssize_t getread, getwrite;

	if (argc != 3)
	{
		printf("Usage: cp file_from file_t\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];

	fp = open(file_from, O_RDONLY);
	fp2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fp2 == -1 || fp == -1)
	{
		perror("Can't write to file_to\n");
		exit(99);
	}
	while ((getread = read(fp, buffer, sizeof(buffer))) > 0)
	{
		getwrite = write(fp2, buffer, getread);
		if (getwrite == -1)
		{
			close(fp);
			close(fp2);
			return (-1);
		}
	}
	if (getread == -1)
	{
		close(fp);
		close(fp2);
		return (-1);
	}
	close(fp);
	close(fp2);
	return (1);
}
