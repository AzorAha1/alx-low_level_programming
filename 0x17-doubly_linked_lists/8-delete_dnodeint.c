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
	if (!(*head) && index == 0)
	{
		return (-1);
	}
	temp = *head;
	while (i < index - 1 && temp)
	{
		temp = temp->next;
		i++;
	}
	if (i >= index)
	{
		return (-1);
	}
	if (i == 0)
	{
		*head = temp->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(temp);
		return (1);
	}
	if (temp == NULL)
	{
		return (-1);
	}
	if (temp->prev != NULL)
	{
		temp->prev->next = temp->next;
	}
	if (temp->next != NULL)
	{
		temp->next->prev = temp->prev;
	}
	free(temp);
	return (1);
}
