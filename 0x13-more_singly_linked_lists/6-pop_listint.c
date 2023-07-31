#include<stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function to remove head node
 * @head: argument
 * Description - removing head node
 * Return: return type
 */
int pop_listint(listint_t **head)
{
	listint_t *sub;

	if (*head == NULL)
	{
		return (0);
	}
	sub = *head;
	*head = (*head)->next;
	free(sub);
	return ((*head)->n);
}
