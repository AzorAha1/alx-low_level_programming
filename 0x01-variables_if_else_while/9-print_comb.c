#include <stdio.h>
/**
 *  main - This is a description
 *
 *  Return: Always (Success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar('0' + num);
		if (num < 9)
		{
			putchar(',');
		}
		putchar(' ');
		num++;
	}
	putchar('\n');
	return (0);

}

