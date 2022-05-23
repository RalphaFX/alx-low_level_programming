#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning
 * @head: double pointer to a linked list
 * @str: string pointer
 *
 * Return: address of new element/Node
 */
list_t *add_node(list_t  **head, const char *str)
{
	int i;
	list_t *temporary;

	i = 0;
	temporary = malloc(sizeof(list_t));

	if (temporary == NULL)
		return (NULL);

	temporary->str = strdup(str);
	while (str[i]  != '\0')
	{
		i++;
	}
	temporary->len = i;
	temporary->next = *head;
	*head = temporary;

	return (temporary);
}
