#include "main.h"
/**
 * _isalpha - returns 1 if c is alphabet
 * @c: integer to be checked by function
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
