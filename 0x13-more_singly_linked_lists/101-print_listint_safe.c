#include<stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_listint_safe - function name
 * @head: head
 * Description - this is the description
 * Return: return type
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t counter;

	counter = 0;
	if (head == NULL)
	{
		exit (98);
	}
	for (; head != NULL; head = head->next)
	{
		printf("%d", head->n);
		counter++;
	}
	return (counter);
}
