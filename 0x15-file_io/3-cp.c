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
int main(const char *file_from, const char *file_to)
{
	int fp;
	int fp2;

	file_from = malloc(sizeof(char) *1024);
	if (file_from == NULL)
	{
		perror("Error: Can't read from file_from\n");
		exit(98);
	}
	fp = open(file_from, O_CREAT | O_RDONLY | O_TRUNC, 664);
	if (fp = -1)
	{
		perror("Error: Can't read from the file_to\n");
		exit (98);
	}
	fp2 = open(file_to, O_WRONLY);
	if (fp2 = -1)
	{
		perror("Can't write to file_to\n");
		exit (99);
	}
	ssize_t getwrite = write(fp, file_from, strlen(file_from));
	if (getwrite == -1)
	{
		close(fp);
		return (-1);
	}
	close(fp);
	close(fp2);
	return(1);
}
