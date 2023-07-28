#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * free_list - name
 * @head: parameter
 * Description - this is the description
 * Return: return type
 */
void free_list(list_t *head)
{
	list_t *new;

	while (head == NULL)
	{
		return;
	}
	if (head == NULL)
	{
		new = head;
		head = head->next;
		free(new);
	}
}
