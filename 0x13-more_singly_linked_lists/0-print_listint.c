#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function name
 * @h: the argument
 * Description - this is the description
 * Return: this is the return type
 */
size_t print_listint(const listint_t *h)
{
	size_t counter;

	counter = 0;
	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		counter++;
	}
	return (counter);
}
