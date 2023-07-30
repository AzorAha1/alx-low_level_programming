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
	size_t check_len;
	char *p_str;

	check_len = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		check_len += strlen(av[i]);
	}
	p_str = (char *)calloc(check_len + 1, 1);
	if (p_str == NULL)
	{
		return (NULL);
	}
	p_str[0] = '\0';
	for (i = 0; i < ac; i++)
	{
		strcat(p_str, av[i]);
		strcat(p_str, "\n");

	}
	return (p_str);
}
