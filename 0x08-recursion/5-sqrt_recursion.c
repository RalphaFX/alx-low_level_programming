#include "main.h"
/**
 * fndSQ - calculate square root recursively using binary method
 * @begin: lower value of range
 * @end: Upper value of range
 * @v: Number to find the SQ of
 *
 * Return: Squareroot of number or -1 if not found
 */
int fndSQ(int begin, int end, int v)
{
	long center;

	if (end >= begin)
	{
		center = begin + ((end - begin) / 2);
		if (center * center == v)
			return (center);
		if (center * center > v)
			return (fndSQ(begin, center - 1, v));
		if (center * center < v)
			return (fndSQ(center + 1, end, v));
	}
	return (-1);
}
/**
 * _sqrt_recursion - Entry of the program
 * Finds the natural square root of an integer
 * @n: value given
 * Return: Square root of n or -1
 *
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (fndSQ(2, n, n));
}
