#include <stdio.h>
#include "_putchar.c"
#include "1-main.c"
/**
 *  main - This is a description
 *
 *  Return: Always (Success)
 */
void print_alphabet(void)
{
	char alpha;
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
}
int main(void)
{
	print_alphabet();
	putchar('\n');
	return (0);
}

