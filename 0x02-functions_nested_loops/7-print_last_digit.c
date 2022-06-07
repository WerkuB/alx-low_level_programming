#include "main.h"
/**
 * _abs - returns n if n >0 else -1*n
 * @n: integer to be tested
 * Return: abs(n_
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-1 * n);
}
/**
 * print_last_digit- print last digit of a number
 * @n: integer to be checked by function
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int lastD;
	/* last digit of n*/
	lastD = _abs((n % 10));
	_putchar(lastD + '0');
	return (lastD);
}
