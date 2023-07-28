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
	list_t *current;

	if (head == NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
