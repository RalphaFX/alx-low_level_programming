#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: the length of a
 */
void reverse_array(int *a, int n)
{
	int temp, i, j;

	j = (n - 1);

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j--] = temp;
	}
}
