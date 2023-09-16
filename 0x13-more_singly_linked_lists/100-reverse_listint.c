#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - function name
 * @head: head node
 * Description - function to reverse a linked list
 * Return: returns first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *last, *first;

	first = NULL;
	last = NULL;
	while (*head)
	{
		first = (*head)->next;
		(*head)->next = last;
		last = *head;
		*head = last;
		*head = first;
	}
	return (last);
}
