#include <stdio.h>
#include "_putchar.c"
/**
 *  main - This is a description
 *
 *  Return: Always (Success)
 */
void print_alphabet(void);
int main(void)
{
	void print_alphabet();
	_putchar('\n');
	return (0);
}
void print_alphabet(void)
{
	char alpha;
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
}

