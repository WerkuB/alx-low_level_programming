#include "main.h"
/**
 * _isdigit - returns 1 if c is digit
 * @c: integer to be checked by function
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
