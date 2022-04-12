#include "main.h"

/**
 * print_alphabet_x10 - Entry point of the program
 * Description: Print alphabets of lower case to stdout 10 times
 * return: 0 Success
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
