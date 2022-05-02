#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -  Entry point
 * the Program prints its name followed by new line
 * @argc: Commandss count
 * @argv: Commands
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
