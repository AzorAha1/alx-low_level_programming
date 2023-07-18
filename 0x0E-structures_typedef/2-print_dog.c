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
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	if (d->age == 0)
	{
		printf("Age: (nil)");
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	if (d == NULL)
	{
		return;
	}
	else
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}

}
