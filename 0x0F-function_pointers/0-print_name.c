#include "function_pointers.h"

/**
 * print_name - prints the name
 * @name: string of characters
 * @f: function pointer to a function
 * that has arguments as char and returns nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
