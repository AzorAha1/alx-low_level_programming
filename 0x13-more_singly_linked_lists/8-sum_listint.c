#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - function name
 * @head: argument
 * Description - getting sum of all data
 * Return: int return type
 */
int sum_listint(listint_t *head)
{
	listint_t *newnode;
	int sum;

	newnode = head;
	sum = 0;
	if (newnode == NULL)
	{
		return (0);
	}
	while (newnode != NULL)
	{
		sum += newnode->n;
		newnode = newnode->next;
	}
	return (sum);
}
