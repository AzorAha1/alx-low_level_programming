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

	if (*head == NULL)
	{
		return (-1);
	}
	else
	{
		newnode = *head;
		if (index == 0)
		{
			*head = newnode->next;
			free(newnode);
		}
		for (i = 0; i < index - 1 && newnode->next != NULL; i++)
		{
			newnode = newnode->next;
		}
		ptr = newnode->next->next;
		free(newnode->next);
		newnode->next = ptr;
	}
	return (1);
}
