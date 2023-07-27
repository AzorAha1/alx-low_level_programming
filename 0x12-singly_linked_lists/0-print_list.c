#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - name
 * @h: parameter
 * Description - this is the description
 * Return: return type
 */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	for (; h != NULL; h = h->next)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		count++;
	}
	return (count);
}
