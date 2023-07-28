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
	list_t *newnode = malloc(sizeof(list_t));
	list_t *current = *head;

	if (str == NULL)
	{
		return (NULL);
	}
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		return (NULL);
	}
	for (; current != NULL; current = current->next)
	{
		printf("[%lu] %s\n", strlen(current->str), current->str);
	}
	newnode->next = current;
	return (newnode);
}
