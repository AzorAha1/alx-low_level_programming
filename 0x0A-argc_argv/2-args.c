#include <stdio.h>
#include <string.h>
/**
 * main - main
 * @argc: argument count
 * @argv: argument vector
 * Description - function
 * Return: return type
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
