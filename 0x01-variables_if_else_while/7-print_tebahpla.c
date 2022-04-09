#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point of the  program
 * Print lowercase alphabets n reverse using putchar
 * Return: 0 (Success)
 */
int main(void)
{
	char lower_case;

	for (lower_case = 'z' ; lower_case >= 'z' ; lower_case--)
		putchar(lower_case);
	putchar('\n');

	return (0);

}
