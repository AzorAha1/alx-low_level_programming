#include <stdio.h>
#include <string.h>
/**
 * _strspn - strchr function
 * @s: takes char
 * @accept: takes char
 * Description - function
 * Return: return type
 */
unsigned int _strspn(char *s, char *accept)
{
	int pos = strspn(s, accept);

	return (pos);
}
