#include <stdio.h>
#include <string.h>
/**
 * print_chessboard - print_chessboard function
 * @a: takes char
 * Description - function
 * Return: return type
 */
void print_diagsums(int *a, int size)
{
	int main = 0;
	int sec = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		main += a[i * size + i];
		sec += a[i * size + (size - 1 - i)];
	}
	printf("%d\n", main);
	printf("%d\n", sec);
}
