#include "lists.h"
/**
 * get_dnodeint_at_index - function name
 * @head: node head
 * @index: index
 * Description - getting node at index
 * Return: returns node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *newnode;
	unsigned int counter;

	counter = 0;
	if (!head)
	{
		return (NULL);
	}
	newnode = head;
	while (newnode)
	{
		if (counter == index)
		{
			return (newnode);
		}
		newnode = newnode->next;
		counter++;
	}
	return (NULL);
}
