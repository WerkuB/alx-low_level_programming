#include "main.h"
/**
 * print_sign - returns 1 if n is +, 0 if n is 0 and -1 if n is negative
 * @n: integer to be checked by function
 * Return: 1 or 0 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
