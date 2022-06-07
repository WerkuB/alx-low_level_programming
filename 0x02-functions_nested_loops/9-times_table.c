#include "main.h"
/**
 * times_table - prints time table of 0-9
 */
void times_table(void)
{
	int i, j, product;
	/* code for time table*/
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				_putchar('0');
				continue;
			}
		product = i * j;
		_putchar(',');
		_putchar(' ');
		if (product >= 10)
		{
			_putchar(product / 10 + '0');
			_putchar(product % 10 + '0');
		}
		else
		{
			_putchar(' ');
			_putchar(product + '0');
		}
		}
	_putchar('\n');
	}
}
