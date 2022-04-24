#include  "main.h"

/**
 * *leet - encodes a string to 1337 coding
 * @s: string to be encoded
 *
 * Return: the encoded string
 */
char *leet(char *s)
{
	int i, j;

	char *characters = "aAeEoOtTlL";
	char *numbers = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (s[i] == characters[j])
			{
				s[i] = numbers[j];
			}
		}
	}

	return (s);
}
