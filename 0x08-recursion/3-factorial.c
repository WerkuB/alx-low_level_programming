#include "main.h"
/**
 * factorial - prints factorial of n
 * @n: a number give to calculate factorial
 * Return: -1 if nis lessthan 0, 1 if n is 1 or 0 else factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
