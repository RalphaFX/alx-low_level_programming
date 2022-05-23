#include "lists.h"
#include <stdio.h>
/**
 * list_len  - returns # of elements in a linked list
 * @h: pointer argument to struct
 * Return: # of elements
 */

size_t  list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
