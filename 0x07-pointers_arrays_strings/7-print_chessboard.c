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
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
