#include "main.h"
/**
 * _strlen - compute the length of strings
 * @s: the string to be computed
 * Return: return length of a given string
 */
int _strlen(char *s)
{
	int i, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
