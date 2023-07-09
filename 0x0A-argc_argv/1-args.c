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
	printf("%d\n", argc);
	if (argc > 1)
	{
		printf("%s", argv[1]);
	}
	return (0);
}
