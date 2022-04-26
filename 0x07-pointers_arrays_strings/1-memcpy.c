#include "main.h"

/**
 * *_memcpy - copies n bytes from src to dest
 * @dest: memory where is copied to
 * @src: memory where is copied from
 * @n: number of bytes to copied
 *
 * Return: copied memory 
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
