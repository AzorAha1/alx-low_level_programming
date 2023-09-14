#include "lists.h"
/**
 * free_dlistint - fucntion name
 * @head: node head
 * Description - frees allocated memory
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *newnode;

	while (newnode)
	{
		newnode = head;
		head = head->next;
		free(newnode);
	}
}
