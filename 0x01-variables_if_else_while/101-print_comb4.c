#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point of the  program
 * Print all possible combinations of 3 digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 48 ; a < 58 ; a++)
	{	for (b = 49 ; b < 58 ; b++)
		{
			for (c = 50 ; c < 58 ; c++)
			{
				if ((c > b) && (b > a))
				{	putchar(a);
					putchar(b);
					putchar(c);

					if ((a != 55) || (b != 56))
					{	putchar(',');
						putchar(' ');

					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
