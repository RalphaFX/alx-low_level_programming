#include <unistd.h>

/**
 * printchar writes a character to output
 * Return: 1 (Success)
 * Return: -1 (Error)
 */
int printchar(char r)
{
	return (write(1, &r, 1));
}
