#include<stdio.h>
#include<string.h>
/**
 * _strncat - function to concatenate two strings with the use of n
 * @dest: this takes char
 * @src: this takes char
 * @n: this takes int
 * Description - this function concatenates two strings, its different from strcat 
 * Return: this this the return type
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
