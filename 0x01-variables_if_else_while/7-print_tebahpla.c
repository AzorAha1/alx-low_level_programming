#include <stdio.h>
/**
 *  main - This is a description
 *
 *  Return: Always (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
