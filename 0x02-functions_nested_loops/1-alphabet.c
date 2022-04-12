#include "main.h"

/**
 * print_alphabet - Entry point of the program
 * Description: Print alphabets of lower case to stdout
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
