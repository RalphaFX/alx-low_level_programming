#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - length of a string
 * @s: string
 *
 * Return: length
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i++;
	return (i);
}
/**
 * _strdup - return pointer to allocated memory
 * @str: string to allocate memory
 *
 * Return: pointer to duplicated string => success
 * NULL => failure
 */
char *_strdup(char *str)
{
	int j, len;
	char *p;

	if (str == NULL)
		return (NULL);

	len = _strlen(str);

	if (len <= 0)
		return (NULL);

	p = malloc(sizeof(char) * len);

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	else
	{
		for (j=0; j < len; j++)
		{
			p[j] = str[j];
		}
		p[j] = '\0';
		return ((char *)p);
	}
}
