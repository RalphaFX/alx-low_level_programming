#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point of the  program
 * Print all possible combinations of single digits base 10
 * Return: 0 (Success)
 */
int main(void)
{
       int base10;
       
       for (base10 = 0 ; base10 < 10 ; base10+)
       {
	       putchar(base10%10 + '0');
	       if (base10 < 9)
	       {
		       putchar(',');
		       putchar(' ');
	       }
       }
	putchar('\n');

	return (0);

}
