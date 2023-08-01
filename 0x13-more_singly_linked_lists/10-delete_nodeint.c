#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - function name
 * @head: head
 * @index: index
 * Description - this is the description
 * Return: return type
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *newnode;
	listint_t *ptr;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	else
	{
		newnode = *head;
		if (index == 0)
		{
			newnode = *head;
			*head = newnode->next;
			free(newnode);
			return (1);
		}
		for (i = 0; i < index - 1 && newnode != NULL; i++)
		{
			newnode = newnode->next;
		}
		if (newnode == NULL || newnode->next == NULL)
		{
			return (-1);
		}
		ptr = newnode->next->next;
		free(newnode->next);
		newnode->next = ptr;
	}
	return (1);
}
