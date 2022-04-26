#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of two diagonals of 
 * a square matrix
 * @a: square matrix
 * @size: size by size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int i;

	int tl = tr = 0;
	int b = size * size;

	for (i = 0; i < b; i += (size + 1))
	{
		tl += a[i];
	}

	for (i = size - 1; i < (b - 1); i += (size - 1))
	{
		tr += a[i];
	}

	printf("%d, %d\n", tl, tr);
}
