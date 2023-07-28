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
	list_t *new = malloc(sizeof(list_t));

	head = new;

	if (new == NULL)
	{
		return;
	}
	else
	{
		free(head);
	}
}
