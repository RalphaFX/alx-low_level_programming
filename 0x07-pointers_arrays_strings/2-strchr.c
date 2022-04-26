#include "main.h"


/**
 * *_strchr - searches and returns the first occurrence
 * of the character
 * @s: string to be searched
 * @c: character to be matched
 *
 * Return: first occurence of the character c
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (!c)
		return (s);

	return (NULL);
}
