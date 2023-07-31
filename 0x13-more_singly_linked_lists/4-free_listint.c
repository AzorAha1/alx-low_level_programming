#include<stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - function name
 * @head: argument
 * Description - this is the description
 * Return
 */
void free_listint(listint_t *head)
{
	listint_t *newnode;

	while (head != NULL)
	{
		newnode = head;
		head = head->next;
		free(newnode);
	}
}
