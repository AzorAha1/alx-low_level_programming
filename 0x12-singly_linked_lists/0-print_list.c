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
	if (h->str == NULL)
	{
		printf("[0] (nil)");
	}
	for (; h != NULL; h = h->next)
	{
		printf("[%ld] %s\n", count, h->str);
		count++;
	}
	return (count);
}