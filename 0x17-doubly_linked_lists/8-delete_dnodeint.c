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

	if (!head || !(*head))
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
		{
			(*head)->prev = NULL;
		}
		free(temp);
		return (1);
	}
	i = 0;
	if (temp == NULL || i < index)
	{
		return (-1);
	}
	while (temp && i < index - 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp->prev)
	{
		temp->prev->next = temp->next;
	}
	if (temp->next)
	{
		temp->next->prev = temp->prev;
	}
	free(temp);
	return (1);
}
