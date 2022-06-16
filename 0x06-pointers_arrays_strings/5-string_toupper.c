#include "main.h"
/**
 * string_toupper - change lowwer letters to capital letter
 * @s: a given string
 * Return: converted characte
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] > 96 && s[i] < 123)
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
