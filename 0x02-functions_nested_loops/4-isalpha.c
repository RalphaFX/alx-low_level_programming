#include "main.h"
/**
 * _isalpha - Entry Point
 * Description- Checks whether a character is alphabet or not
 * @ch: character that is checked
 * Return: 1 Success , 0 not an alphabet
 *
 */

int _isalpha(int ch)
{
	if ((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

