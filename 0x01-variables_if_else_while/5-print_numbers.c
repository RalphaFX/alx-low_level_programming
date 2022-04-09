#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point of the  program
 * Print all single digits base 10 numbers using printf and putchar
 * Return: 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 0 ; digit < 10 ; digit++)
		printf("%d", digit);
	putchar('\n');

	return (0);

}
