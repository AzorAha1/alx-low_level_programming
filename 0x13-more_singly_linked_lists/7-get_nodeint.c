#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - function name
 * @head: argument
 * @index: argument
 * Description - return the nth node
 * Return: return type
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter;
	listint_t *newnode;

	if (head == NULL)
	{
		return (NULL);
	}
	newnode = head;
	counter = 0;

	while (newnode != NULL)
	{
		if (counter == index)
		{
			return (newnode);
		}
		counter++;
		newnode = newnode->next;
	}
	return (newnode);
}
