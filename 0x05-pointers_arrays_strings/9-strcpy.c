#include "main.h"

/**
 *  *_strcpy - copy the string pointed by src 
 *  including the terminating null byte
 * @dest: pointer to which we copy to
 * @src: string to be copied
 * Return: dest
 *
 */

char *_strcpy(char *dest, char *src)
{
	int len;
	int i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
