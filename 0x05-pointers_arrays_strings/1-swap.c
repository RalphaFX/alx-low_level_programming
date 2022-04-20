#include "main.h"

/**
 * swap_int - swap the values of two integers pointed
 * @a: pointer 1
 * @b: pointer 2
 *
 */

void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;

}
