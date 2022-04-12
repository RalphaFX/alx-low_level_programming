#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Entry Point
 * Print _putchar using the main function
 * Return: 0 (Success)
 */

int main(void)
{
	int c;
	char put[] = "_putchar";

	for (c = 0 ; c < 8 ; c++)
	{	_putchar(put[c]);
	}
	_putchar('\n');
	return (0);
}
