#include "lists.h"
#include <stdlib.h>

/**
 * free_list  - frees up a linked list
 * @hea: pointer
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *cursor;

	while (head)
	{
		cursor = head->next;
		free(head->str);
		free(head);
		head = cursor;
	}
}
