#include "main.h"

/**
 * _atoi - converts a string to an int
 * @s: string to be converted
 *
 * Return: the result of conversion
 *
 */

int _atoi(char *s)
{
	int i, c, n, len, g, dig;

	i = c = n = len = dig = g = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (i < len && g == 0)
	{
		if (s[i] == '-')
		{
			c++;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			dig = s[i] - '0';
			if (c % 2)
				dig = -dig;
			n = n * 10 + dig;
			g = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			g = 0;
		}
		i++;
	}
	if (g == 0)
		return (0);
	return (n);
}
