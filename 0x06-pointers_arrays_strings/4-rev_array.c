#include "main.h"
/**
 * reverse_array - reverse the given array
 * @a: given array
 * @n: length of the array
 */
void reverse_array(int *a, int n)
{
	int i, j, k;

	j = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		k = a[i];
		a[i] = a[j];
		a[j] = k;
		j--;
	}
}
