#include <stdio.h>
/**
 * * main-Entry point
 * * Return: 0 if successful
 */
int main(void)
{
	int nums = 0;
	/* code started here*/
	while (nums <= 9)
	{
		putchar(nums + '0');
		nums++;
	}
	putchar('\n');
	return (0);
}
