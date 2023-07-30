#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - main
 * @argc: int a
 * @argv: int b
 * Description - main
 * Return: return
 */
int main(int argc, char *argv[])
{
	int first_input = atoi(argv[1]);
	char *arith = argv[2];
	int second_input = atoi(argv[3]);
	int output;
	int (*fget)(int, int) = get_op_func(arith);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	else if (*arith != '+' || *arith != '-' || *arith != '*' ||
		*arith != '/' || *arith != '%')
	{
		printf("Error\n");
		exit(99);
	}
	else if (*arith == '/' || (*arith == '%' && second_input == 0))
	{
		printf("Error\n");
		exit(100);
	}
	if (fget)
	{
		output = fget(first_input, second_input);
		printf("%d\n", output);
	}
	return (0);
}
