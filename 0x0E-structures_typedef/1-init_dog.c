#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - name
 * @name: takes char
 * @age: takes float
 * @owner: takes char
 * Description - description
 * Return: return type
 * struct dog - name
 * Description: description
 * @d: dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
