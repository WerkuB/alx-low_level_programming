#include "main.h"
/**
 * _strcmp - comprae two given string
 * @s1: string one
 * @s2: string two
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, result = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && result == 0)
	{
		result = s1[i] - s2[i];
		i++;
	}
	return (result);
}
