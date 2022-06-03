#include <stdio.h>
/**
 * * main-Entry point
 * * Return: 0 if successful
 */
int main(void)
{
	char sm_let = 'a';
	char ca_let = 'A';
	/* code started here*/
	while (sm_let <= 'z')
	{
		putchar(sm_let);
		sm_let++;
	}
	while (ca_let <= 'Z')
	{
		putchar(ca_let);
		ca_let++;
	}
	putchar('\n');
	return (0);
}
