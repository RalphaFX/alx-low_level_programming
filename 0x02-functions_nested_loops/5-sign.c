#include "main.h"

/**
 * print_sign - Entry Point
 * Description: check and print the sign of an inteer
 * @n: Inteer to be tested
 * Return: 1 is positive or 0 if 0 or -1 if its negative
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
