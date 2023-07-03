#include <stdio.h>
#include <string.h>
/**
 * _memset - memset function 
 * @s: takes char
 * @b: takes char 
 * @n: takes int
 * Description - function to fill memory with a constant byte
 * Return: return type
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return(s);
}
