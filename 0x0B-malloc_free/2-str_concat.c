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
	return (i);
}
/**
 * str_concat - Entry Point
 * Concatenate two strings and allocate memory
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new allocated memory => success
 * NULL => failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len, len2, len3;
	char *p;

	i = j = 0;

	/* Check if an Empty/NULL string is passed */

	if (s1 != NULL)
		len = _strlen(s1);
	else
		len = 0;
	if (s2 != NULL)
		len2 = _strlen(s2);
	else
		len2 = 0;

	len3 = len + len2 + 1;
	/* +1 to accomodate '\0' character */
	p = malloc(sizeof(char) * len3);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	if (len != 0)
	{
		for (i = 0; s1[i] != '\0'; i++)
			p[i] = s1[i];
	}
	if (len2 != 0)
	{
		for (j = 0; s2[j] != '\0'; i++, j++)
			p[i] = s2[j];
	}
	p[i] = '\0';
	return (p);
}
