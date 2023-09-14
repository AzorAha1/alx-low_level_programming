#include "lists.h"
/**
 * print_dlistint - prints all the elements
 * @h: argument
 * Description - all elements printed
 * Return: returns size_t type
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter;

	for (counter = 0; h; h = h->next)
	{
		printf("%d\n", h->n);
		counter++;
	}
	return (counter);
}
