#include <stdio.h>
#include <string.h>
#include <math.h>
/**
 * isprime - prime number
 * @number: takes int
 * @prime: takes prime
 * Description - function
 * Return: return type
 */
int isprime(int number, int prime)
{
	if (number <= 1)
	{
		return (0);
	}
	else if (number % prime == 0)
	{
		return (0);
	}
	else if (prime * prime > number)
	{
		return (1);
	}
	else
	{
		return (isprime(number, prime + 1));
	}
}
/**
 * is_prime_number - prime
 * @n: int n
 * Description - function
 * Return: return type
 */
int is_prime_number(int n)
{
	return (isprime(n, 2));
}
