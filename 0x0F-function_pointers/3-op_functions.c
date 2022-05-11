#include  "3-calc.h"

/**
 * op_add - summation
 * @a: first arg
 * @b: second arg
 * Return; SUM
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction
 * @a: first int
 * @b: second int
 * Return: Difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: first int
 * @b: second int
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of 2  ints
 * @a: first int
 * @b: second int
 * Return: product of a * (1/b)
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - remainder of division
 * @a: first int
 * @b: second int
 * Return: remainder 
 */
int  op_mod(int a, int b)
{
	return (a % b);
}

