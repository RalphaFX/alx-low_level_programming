#include "main.h"

/**
 * *_strstr - locate a substring in a long string
 * @haystack: main string to be searched
 * @needle: substring to be located in haystack
 *
 * Return: Pointer to the beginning of located string
 * or NULL if substring is no match
 */
char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	*h = haystack;
	*n = needle;

	while (*h)
	{
		n = needle;
		h = haystack;

		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
