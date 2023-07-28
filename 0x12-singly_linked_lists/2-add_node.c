#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - name
 * @head: parameter
 * @str:str
 * Description - this is the description
 * Return: return type
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	newnode = malloc(sizeof(list_t));

	if (str == NULL)
	{
		return (NULL);
	}
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
