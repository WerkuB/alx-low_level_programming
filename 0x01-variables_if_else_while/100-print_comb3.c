#include <stdio.h>
/**
 * * main-Entry point
 * * Return: 0 if successful
 */
int main(void)
{
	int num1, num2;
	/* code started here*/
	for (num1=0; num1 <=8; num1++)
	{
		for (num2=1; num2 <= 9; num2++)
		{
			putchar(num1 + '0');
			putchar(num2 + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
