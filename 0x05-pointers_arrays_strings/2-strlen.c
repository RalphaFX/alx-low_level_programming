#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: A string to evaluate
 * Return: The length of the string
 *
 */

int _strlen(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
