#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list
 * @h: input lisst
 * Return: # of Nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int i;

	i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
