#include <stdio.h>
/**
 * * main-Entry point
 * * Return: 0 if successful
 */
int main(void)
{
	char sm_let = 'z';
	/* code started here*/
	while (sm_let >= 'a')
	{
		putchar(sm_let);
		sm_let--;
	}
	putchar('\n');
	return (0);
}
