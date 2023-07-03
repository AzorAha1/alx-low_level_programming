#include <stdio.h>
#include <string.h>
/**
 * print_chessboard - print_chessboard function
 * @a: takes char
 * Description - function
 * Return: return type
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		printf("%s\n", a[i]);
	}
}
