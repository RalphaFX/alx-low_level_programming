#include "main.h"

/**
 * set_string - sets the value of a pointer to char
 * @s: pointer to the address of the string
 * @to: string to set the value to
 *
 * Return: Nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
