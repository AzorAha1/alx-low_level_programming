#include "lists.h"
/**
 * delete_dnodeint_at_index - function name
 * @head: head node
 * @index: index
 * Description - delete at index
 * Return: returns 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	i = 0;
	if (!(*head))
	{
		return (-1);
	}
	temp = *head;
	while (i < index - 1 && temp)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
	{
		return (-1);
	}
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	return (1);
}
