#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - function name
 * @head: first node
 * @n: number of elements
 * Description - function to insert node at the beginning
 * Return: return type
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
