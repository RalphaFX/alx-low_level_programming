#include "main.h"
#include <stdio.h>
/**
 * create_array - creates an array of type char
 * @size: size of an array
 * @c: character to be in the array
 *
 * Return: pointer to an array or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (!(size > 0))
		return (NULL);

	p = malloc(sizeof(char) * size);

	if (p == NULL)
		return (NULL);
	else
	{
		i = 0;

		while (i < size)
		{
			p[i] = c;
			i++;
		}
	}
	return ((char *)p);
}
