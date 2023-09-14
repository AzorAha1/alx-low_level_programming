#include "lists.h"
/**
 * add_dnodeint - function name
 * @head: node head
 * @n: node data
 * Description - adding node at the start of list
 * Return: pointer returned
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (!newnode)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;
	newnode->prev = NULL;
	*head = newnode;
	return (newnode);
}
