#include <stdio.h>
/**
 * * main-Entry point
 * * Return: 0 if successful
 */
int main(void)
{
	int num1, num2, num3;
	/* code started here*/
	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 1; num2 <= 9; num2++)
		{
			for (num3 = 2; num3 <= 9; num3++)
			{
				if (num1 < num2 && num2 < num3)
				{
					putchar(num1 + '0');
					putchar(num2 + '0');
					putchar(num3 + '0');
					if (num1 != 7 || num2 != 8 || num3 != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
