#include <stdio.h>
#include "lists.h"
/**
 * listint_len - function name
 * @h: argument
 * Description - this is the description
 * Return: return type
 */
size_t listint_len(const listint_t *h)
{
	size_t counter;

	counter = 0;
	for (; h != NULL; h = h->next)
	{
		counter++;
	}
	return (counter);
}
