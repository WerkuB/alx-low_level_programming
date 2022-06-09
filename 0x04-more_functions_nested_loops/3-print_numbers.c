#include "main.h"
/**
 * print_numbers- print numbers 0-9
 * Return:nothing,return vidd
 */
	void print_numbers(void)
	{
		int i;
		/* loop which print 0-9*/
		for (i = 0; i <= 9; i++)
		{
			_putchar(i + '0');
		}
	_putchar('\n');
	}
