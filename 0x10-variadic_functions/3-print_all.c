#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_int - integer printing
 * @list: arguments ints
 */

void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - float printing
 * @list: float arguments
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_char - int printing
 * @list: string of characters
 */
void print_char(va_list list)
{
	printf("%c", var_arg(list, int));
}

/**
 * print_str - strin printing
 * @list: string argument
 */
void print_str(va_list list)
{
	char *s = va_arg(list, char *);
	if (s == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", s);
	}
}

/**
 * print_all - any type printing
 * @format: args to print
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0, j = 0;
	char *separator = "";

	printTypeStruct printType[] = {
		{ "i", print_int },
		{ "f", print_float },
		{ "c", print_char },
		{ "s", print_str },
		{NULL, NULL}
	};

	va_start(list, format);
	while (format && format[i])
	{
		while (j < 4)
		{
			if (*printType[j].type == format[i])
			{
				printf("%s", separator);
				printType[j].printer(list);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
