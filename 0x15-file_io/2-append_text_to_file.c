#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
/**
 * append_text_to_file - function name
 * @filename: argument
 * @text_content: argument
 * Description - create file
 * Return: return
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t getwrite;

	if (!filename)
	{
		return (-1);
	}
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		getwrite = write(fp, text_content, strlen(text_content));
		if (getwrite == -1)
		{
			close(fp);
			return (-1);
		}
	}
	close(fp);
	return (1);
}
