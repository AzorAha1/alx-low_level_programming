#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - name
 * Description - description
 * Return: return type
 * struct dog - name
 * Description: description
 * @d: dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else if (d->name != NULL)
	{
		printf("Name: %s\n", d->name);
	}
	else
	{
		printf("Name: (nil)");
	}
	printf("Age: %f\n", d->age);
	if (d->owner != NULL)
	{
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf("Owner: (nil)");
	}
}
