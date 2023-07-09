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
	int mul = 1;
	int num1;
	int num2;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}

