#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point of the  program
 * Print all possible combinations 
 * Return: 0 (Success)
 */
int main(void)
{
	int b;
	int c;

	for (b = 0 ; b < 9 ; b++)
	{	c = b +1;
		for ( ; c < 10 ; c++)
		{	putchar(b % 10 + '0');
			putchar(c % 10 + '0');

			if (b < 8 || d < 9)
			{	putchar(',');
				putchar(' ');

			}
		}
	}
	putchar('\n');
	return (0);
}
