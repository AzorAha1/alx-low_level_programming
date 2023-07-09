#include <stdio.h>
#include <string.h>
#include<stdlib.h>
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
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else if (argc <= 1)
	{
		printf("0\n");
	}
	else
	{
		printf("Error");
		return (1);
	}
	return (0);
}
