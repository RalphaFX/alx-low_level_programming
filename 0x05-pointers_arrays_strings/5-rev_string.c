#include "main.h"

/**
 * rev_string - reverse a string supplied
 * @s: pointer to the string
 *
 */

void rev_string(char *s)
{
	int len;
	int len_0;
	int j;
	char temp;

	len = len_0 = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	/* Find the length of the string */
	len_0 = (len - 1);


	for (j = 0; j < (len / 2); j++)
	{
		temp = s[j];
		s[j] = s[len_0];
		s[len_0--] = temp;
	}
}

