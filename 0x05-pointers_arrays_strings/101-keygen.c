#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 * Description: generate random valid
 * passwords for the program 101-crackme
 *
 * Return: 0 (Success)
 *
 */

int main(void)
{
	int i, sum, n;
	int pass[100];

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 60;
		sum += (pass[i]  '0');
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 60)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
