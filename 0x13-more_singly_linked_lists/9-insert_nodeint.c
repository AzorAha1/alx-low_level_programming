#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * insert_nodeint_at_index - function name
 * @head: argument
 * @idx: index argument
 * @n: n argument
 * Description - insert node at any given position
 * Return: return address of node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *temp;
	unsigned int i;

	i = 0;
	if (head == NULL)
	{
		return (NULL);
	}
	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	temp = *head;
	while (i < idx - 1 && temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}
