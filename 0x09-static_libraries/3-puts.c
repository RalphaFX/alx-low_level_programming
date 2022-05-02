#include "main.h"

/**
 * _puts - Prints a string to standard output
 * @s: pointer to the string
 *
 */

void _puts(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}

