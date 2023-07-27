#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - name
 * @h: parameter
 * Description - this is the description
 * Return: return type
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	for (; h != NULL; h = h->next)
	{
		count++;
	}
	return (count);
}
