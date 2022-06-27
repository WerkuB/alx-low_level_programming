#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - a function which creare array of a chars and initialaize it
 * @size: size of the array
 * @c: character to be initialized
 * Return: null if the size is zero or pointer if it fails or it is not zero
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size <= 0)
		return (0);
	s = malloc(sizeof(char) * size);
	if (s == 0)
		return (0);
	for (i = 0; i < size; i++)
		*(s + i) = c;
	*(s + i) = '\0';
	return (s);
}
