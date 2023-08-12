#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * main - main function
 * @void: void argument
 * Description - this is the description
 * Return: return type
 */
int main(int argc, char **argv)
{
	const char *file_from;
	const char *file_to;
	int fp;
	int fp2;
	char buffer[1024];
	ssize_t getread, getwrite;

	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	if (file_from == NULL)
	{
		perror("Error: Can't read from file_from\n");
		exit(98);
	}
	fp = open(file_from, O_RDONLY);
	if (fp == -1)
	{
		perror("Error: Can't read from the file_to\n");
		exit (98);
	}
	fp2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC);
	if (fp2 == -1)
	{
		perror("Can't write to file_to\n");
		exit (99);
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
	return(1);
}
