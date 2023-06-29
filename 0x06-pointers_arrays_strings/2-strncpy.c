#include<stdio.h>
#include<string.h>
/**
 * _strncpy - function to concatenate two strings with the use of n
 * @dest: this takes char
 * @src: this takes char
 * @n: this takes int
 * Description - this function concatenates two strings
 * Return: this this the return type
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
