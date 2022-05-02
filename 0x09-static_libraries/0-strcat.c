#include "main.h"

/**
 * *_strcat - concatenates two strings dest and src
 * appends src to dest
 * Adds the terminatin null byte
 * @dest: pointer to the buffer in which we copy
 * @src: string to be copied
 *
 * Return: The pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
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
	len3 = len + len2;

	for (i = len2; i < len3; i++)
	{
		dest[i] = src[j];
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
