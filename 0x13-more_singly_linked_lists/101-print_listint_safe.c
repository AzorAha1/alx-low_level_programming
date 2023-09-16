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
	const listint_t *first;
	const listint_t *second;

	counter = 0;
	if (head == NULL)
	{
		return (-1);
		exit (98);
	}
	while (first != NULL && second != NULL && first->next != NULL)
	{
		first = first->next->next;
		second = second->next;
		counter++;
		if (first == second)
		{
			exit (98);
		}
	}
	second = head;
	while (second != NULL)
	{
		printf("%d\n", second->n);
		second = second->next;
	}
	return (counter);
}
