#include "main.h"

/**
 * string_toupper - change lowercase characters
 *  to upper case
 *  @s: string to be modifie
 *
 *  Return: the results of modification
 */
char *strin_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'a') && (s[i] <= 'z'))
		{
			s[i] = (s[i] - 32);
		}
	}

	return (s);
}
