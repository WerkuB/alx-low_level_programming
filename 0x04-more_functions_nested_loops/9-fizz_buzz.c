#include <stdio.h>
/**
 * main - print 1 to 100 and replace some numbers withwords
 * Return: always 0
 */
int main(void)
{
	int i, j = 100;

	for (i = 1; i <= j; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			if (i < j)
				printf("Buzz ");

			else
				printf("Buzz");
		}
		else
		{
			printf("%i ", i);
		}
	}
	printf("\n");
	return (0);
}
