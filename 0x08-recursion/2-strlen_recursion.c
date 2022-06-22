#include "main.h"
/**
 * _strlen_recursion - print length of the string
 * @s: string to be printed
 * Return: size of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{

		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
