#include "main.h"

/**
 * _abs - Entry Point
 * Description: compute absolute value of n
 * @n: Inteer to be tested
 * Return: The absolute value of @n
 *
 */

int _abs(int n)
{
	return (n < 0 ? -1 * n : n);
}
/**
 * print_last_digit: prints the last digit of integer n
 * @n: the Value Integer
 * Return: The last digit
 */
int print_last_digit(int n)
{
	int lastD;

	lastD = _abs((n % 10));
	_putchar(lastD + 48);

	return (lastD);
}
