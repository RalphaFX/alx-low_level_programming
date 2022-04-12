#include <unistd.h>

/**
 * _putchar - writes a character to standard output buffer
 * return: 1 Success
 * return: -1 Error
 */

int _putchar(char r)
{
	return (write(1, &r, 1));
}
