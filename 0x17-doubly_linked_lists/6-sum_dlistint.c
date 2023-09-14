#include "lists.h"
/**
 * sum_dlistint - function name
 * @head: node head
 * Description - sums all data in linked list
 * Return: returns sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *newnode;
	int result;

	result = 0;
	if (head == NULL)
	{
		return (0);
	}
	newnode = head;
	while (newnode)
	{
		result += newnode->n;
		newnode = newnode->next;
	}
	return (result);
}
