#include <stdio.h>
/**
 * main - A C code which find largest prim factor
 * Return: always 0
 */
int main(void)

{
	long n, i;

	n = 612852475143;
	for (i = 2; i < n; i++)
	{
		while (n % i == 0)
			n = n / i;
	}

	printf("%lu\n", n);

	return (0);
}
