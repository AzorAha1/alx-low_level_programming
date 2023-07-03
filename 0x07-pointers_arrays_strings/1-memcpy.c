#include <stdio.h>
#include <string.h>
/**
 * _memcpy - memset function
 * @dest: takes char
 * @src: takes char
 * @n: takes int
 * Description - function to fill memory with a constant byte
 * Return: return type
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
