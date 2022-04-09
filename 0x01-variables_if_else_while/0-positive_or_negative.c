#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Entry Point
 * Assigns  a random number to a variable 
 * Print whether the number is positive or negative
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
