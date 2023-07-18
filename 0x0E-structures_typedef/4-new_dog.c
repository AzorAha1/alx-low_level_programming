#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - name
 * @name: takes char
 * @age: takes float
 * @owner: takes char
 * Description - description
 * Return: return type
 * struct dog - name
 * Description: description
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
	{
		return (NULL);
	}
	p->name = strdup(name);
	p->owner = strdup(owner);
	p->age = age;
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	if (p->owner == NULL)
	{
		free(p);
		return (NULL);
	}
	return (p);
}
