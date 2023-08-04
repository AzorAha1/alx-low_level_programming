#include <stdio.h>
/**
 * get_endianness - function name
 * @void: no arguments
 * Description - checkes endian
 * Return: returns int
 */
int get_endianness(void)
{
	unsigned int x;
	char *check;

	x = 1;
	check = (char *) &x;

	if (*check)
	{
		return (1);
	}
	return (0);
}
