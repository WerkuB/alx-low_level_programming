#include "main.h"
/**
 * more_numbers- print numbers 0-14 10 times
 * Return:nothing,return vidd
 */
	void more_numbers(void)
	{
		int i, j;

		for (j = 1; j <= 10; j++)
		{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i + '0');
		}
	_putchar('\n');
	}
