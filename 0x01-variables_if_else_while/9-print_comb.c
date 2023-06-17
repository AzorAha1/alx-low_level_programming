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
		putchar(',');
                num++;
        }
	
	putchar('$');
        putchar('\n');
        return (0);

}
