#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * * main-Entry point
 * * Return: 0 if successful
 */
int main(void)
{
	int n;
	int Last_d;
	/* The code start Here*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Last_d = n % 10;
	if (Last_d > 5)
	{
		printf("Last digit of %d is %d and is greter than 5\n", n, Last_d);
	}
	else if (Last_d == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, Last_d);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Last_d);
	}
	return (0);
}
