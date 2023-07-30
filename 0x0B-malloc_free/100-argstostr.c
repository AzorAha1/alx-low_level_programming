#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - function name
 * @ac: argument count
 * @av: arguement vector
 * Description - this is the description
 * Return: return type
 */
char *argstostr(int ac, char **av)
{
	int i;
	int check_len;
	char *p_str;

	check_len = 0;
	if (ac == 0 || *av == NULL)
	{
		return (NULL);
	}
	p_str = (char *)malloc(4096);
	if (av == NULL)
	{
		return (NULL);
	}
	for (i = 1; i < ac; i++)
	{
		check_len += strlen(av[i]);
	}
	for (i = 0; i < ac; i++)
	{
		strcat(p_str, av[i]);
		strcat(p_str, "\n");

	}
	return (p_str);
}
