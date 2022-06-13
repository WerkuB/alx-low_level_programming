#include "main.h"
/**
 * _puts - print a string followd by a new line
 * @str: the string to be printed
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
_putchar('\n');
}
