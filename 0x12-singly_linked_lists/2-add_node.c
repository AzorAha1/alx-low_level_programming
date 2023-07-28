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
	size_t count;
	list_t *current;

	if (str == NULL)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	newnode->next = *head;
	count = 0;
	current = *head;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	newnode->len = count;
	*head = newnode;
	return (*head);
}
