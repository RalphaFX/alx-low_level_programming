#include "main.h"

/**
 * reverse_array - reverses an array of int's
 * @a: array to be reversed
 * @n: The length of array
 */
void reverse_array(int *a, int n)
{
	int temp, i, j;

	j = (n - 1);

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[j];
		j--;
		a[j] = temp;
	}
}
