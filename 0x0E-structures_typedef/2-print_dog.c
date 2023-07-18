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
		printf(" ");
	}
	else if (d->name == NULL || d->age == 0 || d->owner == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}

}
