#include "main.h"

/**
 * *_strncat - conacatenates two strings
 * Appends src to dest with at most n bytes
 * Adds terminating NULL byte
 * @dest: pointer to a buffer to copy a string from
 * @src: Copied string
 * @n: number of bytes to be appended from src
 *
 * Return: Pointer to resulting string dest
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, len2, len3, i, j;

	len = len2 = j = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	while (dest[len2] != '\0')
	{
		len2++;
	}

	if (n <= len)
	{
		len3 = len2 + n;
	}
	else
	{
		len3 = len2 + len;
	}

	for (i = len2; i < len3; i++)
	{
		dest[i] = src[j];
		j++;
	}

	dest[i] = '\0';

	return (dest);

}
