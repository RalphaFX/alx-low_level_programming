#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * Return: void
 *
 */

void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60)
		{
			_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
			_putchar(':');
			_putcahr((j / 10) + 48);
		}
	}
}
