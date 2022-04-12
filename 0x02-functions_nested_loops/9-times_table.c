#include "main.h"

/**
 * times_table - prints multiples of 9
 * Return: void
 *
 */

void times_table(void)
{
	int a = 0;
	int b;
	int pro;

	while (a <= 9)
	{
		b = 0;

		while (b <= 9)
		{
			pro = a * b;
			if (b == 0)
			{	_putchar('0' + pro);
			}
			else if (pro < 10)
			{	_putchar(' ');
				_putchar('0' + pro);
			}
			else
			{	_putchar('0' + (pro / 10));
				_putchar('0' + (pro % 10));
			}
			if (b < 9)
			{	_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
