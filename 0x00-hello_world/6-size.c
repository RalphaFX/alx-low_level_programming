#include <stdio.h>

/**
 * main - Entry Point
 * Prints the size of various data types
 * return 0 to show success
 */
int main(void)
{
	printf("Size of a int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	return (0);
}	
