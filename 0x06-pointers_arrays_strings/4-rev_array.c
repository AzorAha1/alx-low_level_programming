#include<stdio.h>
#include<string.h>
/**
 * _strcmp - function to concatenate two strings with the use of n
 * @s1: this takes char
 * @s2: this takes char
 * Description - strcmp
 * Return: this this the return type
 */
void reverse_array(int *a, int n);
{
	int i;
	char c;

	for(i = 0; i <= n/2; i++)
	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = c;
	}

}
