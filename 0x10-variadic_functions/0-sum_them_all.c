#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - summation of all arguments
 * @n: number of undefined arguments
 * Return: sum or 0 => Error
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i, sum;

	sum = 0;

	va_start(list, n);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			sum += va_arg(list, unsigned int);
		}
	}
	va_end(list);

	return (sum);
}
