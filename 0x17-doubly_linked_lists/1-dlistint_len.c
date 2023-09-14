#include "lists.h"
/**
 * dlistint_len - function name
 * @h: argument name
 * Description - number of elements in linked list
 * Return: returns size_t type
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter;

	counter = 0;
	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
