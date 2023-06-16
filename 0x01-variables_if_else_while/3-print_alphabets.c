#include <stdio.h>
#include <ctype.h>
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
		char upper = toupper(alpha);
		putchar(alpha);
		putchar(upper);
	}
	putchar('\n');
	return (0);
}

