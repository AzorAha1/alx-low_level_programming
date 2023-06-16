#include <stdio.h>
/**
 *  main - This is a description
 *
 *  Return: Always (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}

	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}

