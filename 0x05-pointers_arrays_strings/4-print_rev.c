#include "main.h"
/**
 * print_rev- print a reverse of string followd by a new line
 * @s: the string to be revesed
 */
void print_rev(char *s)
{
	int i, len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
_putchar('\n');
}
