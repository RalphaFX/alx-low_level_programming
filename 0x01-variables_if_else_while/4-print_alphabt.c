#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point of the  program
 * Print lowercase alphabets using putchar
 * Return: 0 (Success)
 */
int main(void)
{
	char lower_case;

	for (lower_case = 'a' ; lower_case <= 'z' ; lower_case++)
		if ((lower_case != 'q') && (lower_case != 'e')
				putchar(lower_case);
	putchar('\n');

	return (0);

}
