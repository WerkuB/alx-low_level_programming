#include "main.h"
/**
 * CheckPrime - Check whether the number is prime pr not
 * @i: used for condition check up
 * @num: number that iterates from 1 to n
 * Return: 1 if the number is prime, 0 if it is not prime
 */
int CheckPrime(int i, int num)
{
	if (num == i)
	{
		return (1);
	}
	else if (i % num == 0)
	{
		return (0);
	}
	else
	{
		return (CheckPrime(i, num + 1));
	}
}
/**
 * is_prime_number - Check the number is prime or not
 * @n: Number Integer
 * Return: 1 if the number is prime 0 if n is not prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (CheckPrime(n, 2));
}
