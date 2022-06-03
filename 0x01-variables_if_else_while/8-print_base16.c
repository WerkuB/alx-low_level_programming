#include <stdio.h>
/**
 * * main-Entry point
 * * Return: 0 if successful
 */
int main(void)
{
	int nums = 0;
	char lets = 'a';
	/* code started here*/
	while (nums <= 9)
	{
		printf("%d", nums);
		nums++;
	}
	while (lets <= 'f')
	{
		putchar(lets);
		lets++;
	}
	putchar('\n');
	return (0);
}
