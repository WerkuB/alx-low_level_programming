#include <stdio.h>
/**
 * * main-Entry point
 * * Return: 0 if successful
 */
int main(void)
{
	char sm_let = 'a';
	/* code started here*/
	while (sm_let <= 'z')
	{
		if (sm_let == 'e' || sm_let == 'q')
		sm_let++;
		putchar(sm_let);
		sm_let++;
	}
	putchar('\n');
	return (0);
}
