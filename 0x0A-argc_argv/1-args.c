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

	printf("%d\n", argc);
	for (i = 0; i < argc;i++)
		if (argc > 1)
		{
			printf("%s", argv[i]);
		}
	return (0);
}
