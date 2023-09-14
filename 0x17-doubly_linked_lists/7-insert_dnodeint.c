#include "lists.h"
#include <string.h>
/**
 * insert_dnodeint_at_index - function name
 * @h: head node
 * @idx: position to insert
 * @n: list data
 * Description - add node at index
 * Return: returns node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp;
	unsigned int i;

	i = 0;
	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!newnode || (!(*h) && idx))
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;
	if (idx == 0)
	{
		return add_dnodeint(h, n);
	}
	temp = *h;
	while (i < idx - 1 && temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
	{
		return (NULL);
	}
	newnode->prev = temp;
	newnode->next = temp->next;
	temp->next = newnode;
	newnode->next->prev = newnode;
	return (newnode);
}
