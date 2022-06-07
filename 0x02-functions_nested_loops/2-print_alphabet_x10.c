#include "main.h"
/**
 * print_ilphabet_x10-print lowercas letters a-z 10 times
 **/
	void print_alphabet_x10(void)
	{
		char c;
		int i;
		/* loop which print a-z*/
		for (i = 1; i <= 10; i++)
		{
			for (c = 'a'; c <= 'z'; c++)
			{
				_putchar(c);
			}
			_putchar('\n');
		}
	}
