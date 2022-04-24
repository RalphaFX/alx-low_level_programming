#include "main.h"

/**
 * *_strcat - concatenates two strings
 * adds the terminating  null byte
 * @dest: pointer to the buffer
 * @src: string to be appended
 * Return: The pointer to the resulting string
 *
 */
char *_strcat(char *dest, char *src)
{
	int len;
	int len2;
	int len3;
	int i, j;

	len = len2 = j = 0;

	while (src[len] != '\0')
		len++;
	while (dest[len2] != '\0')
		len2++;
	len3 = (len + len2);

	for (i = len2; i < len3; i++)
	{
		dest[i] = src[j];
		j++;;
	}
	dest[i] = '\0';

	return (dest);

}
