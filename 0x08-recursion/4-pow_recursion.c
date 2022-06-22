#include "main.h"
/**
 * _pow_recursion - print powers of a given base and exponent
 * @x: base
 * @y: exponent
 * Return: x raised y if y is 0 or +ve else -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
