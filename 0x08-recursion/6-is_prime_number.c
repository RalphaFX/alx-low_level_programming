#include "main.h"
/**
 * fndSQ - computes squareroot
 * @n: given integer
 * @m: compare integer
 * Return:  -1 if not foun or square root
 */
int fndSQ(int n, int m)
{
	if (n <= 0)
		return (-1);
	if (n * n == m)
		return (n);
	return (fndSQ(n - 1, m));
}
/**
 * _sqrt_recursion - find the natural square root
 * @n: integer input
 * Return: square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	return (fndSQ((n / 2), n));
}
/**
 * is_prime_number - check if integer is prime
 * @n: input int
 * Return:  1 if true  or 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1 || _sqrt_recursion(n) >= 1)
		return (0);
	if (_sqrt_recursion(n) == -1)
		return (1);
	return (_sqrt_recursion(n));
}
