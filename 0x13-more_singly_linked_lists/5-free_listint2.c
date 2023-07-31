#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - function name
 * @head: argument
 * Description - free list
 * Return: return type
 */
void free_listint2(listint_t **head)
{
	listint_t *newnode;

	newnode = *head;
	if (head == NULL || *head == NULL)
	{
		return;
	}
	while (newnode != NULL)
	{
		newnode = (*head)->next;
		free(*head);
		*head = NULL;
	}

}
