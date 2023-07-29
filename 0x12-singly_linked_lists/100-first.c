#include <stdio.h>
#include "lists.h"
/**
 * printsomething - function
 * @void: nothing
 * Description - this is the description
 * Return: void
 */
void printsomething (void) __attribute__((constructor));
void printsomething(void)
{
	char *w;

	w = "You're beat and yet, you must allow, \nI bore my house upon my back!\n";
	printf("%s", w);
}
