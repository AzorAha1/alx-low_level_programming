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
	size_t location;

	check_len = 0;
	location = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		check_len += strlen(av[i]);
	}
	check_len += ac - 1;
	p_str = (char *)malloc(check_len + 1);
	if (p_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		strcpy(p_str + location, av[i]);
		location += strlen(av[i]);
		if (i < ac - 1)
		{
			p_str[location] = '\n';
			location++;
		}

	}
	p_str[location] = '\0';
	return (p_str);
}
