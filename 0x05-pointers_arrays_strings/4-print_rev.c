#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to the string
 *
 */

void print_rev(char *s)
{
	int len;
	int i;
	int j;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	/* Find the length of the string */
	len = i;


	for (j = (len - 1); j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}

