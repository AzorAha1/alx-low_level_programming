#include <stdio.h>
/**
 *  main - This is a description
 *
 *  Return: Always (Success)
 */
int main(void)
{
	int num;
	char alpha;

	while (num < 10)
	{
		putchar('0' + num);
		num++;
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}

	putchar('\n');	
	return (0);	
}

