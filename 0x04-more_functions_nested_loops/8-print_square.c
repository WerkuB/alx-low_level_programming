#include "main.h"
/**
 *print_square- print n by n matrix with #.
 *@n: print n
 *Return: Always 0.
 */
void print_square(int n)
{


	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar(35);
			}
			_putchar ('\n');
		}
	}

	else
	{
		_putchar ('\n');
	}

}
