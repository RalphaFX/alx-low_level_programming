#include "main.h"

/**
 * _strspn - finds the length of a prefix substrin
 * @s: string to calculated
 * @accept: bytes that may/may not compose parts of s
 *
 * Return: the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int len;

	len = 0;

	for (i = 0; (s[i] != '\0'); i++)
	{
		for (j = 0; (accept[j] != '\0' && accept[j] != s[i]); j++)
		{
			if (s[i] == accept[j])
				len++;
			if (accept[j] == '\0')
				return (len);
		}
	}
	return (len);
}
