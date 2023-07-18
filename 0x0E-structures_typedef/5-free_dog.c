#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_dog - name
 * @d: type of dog_t
 * Description - description
 * Return: return type
 * struct dog - name
 * Description: description
 */
void free_dog(dog_t *d)
{
	free(d);
}
