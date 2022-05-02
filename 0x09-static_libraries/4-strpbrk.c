#include "main.h"
#include <stddef.h>
/**
 * *_strpbrk - searching a string for a set bytes
 * @s: string to be scanned
 * @accept: set of bytes with characters to match
 *
 * Return: Pointer to the byte in s that matches one of
 * the bytes in accept else return NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (NULL);
}
