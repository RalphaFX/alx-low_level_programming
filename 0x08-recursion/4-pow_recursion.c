#include "main.h"
/**
 * _pow_recursion - calculates x raised to the power of y
 * @x: First value
 * @y: exponent
 * Return: Value of x^y
 */
int _pow_recursion(int , int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, (y - 1)));
}
