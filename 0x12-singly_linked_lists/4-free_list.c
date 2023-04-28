#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - free list_t list
 * @head:  A constant double pointer to a structure of type list_t, which represents the beginning of a linked list.
 * Return: Void
 */

void free_list(list_t *head)
{
	list_t *temp;

	for (temp = head; temp != NULL; temp = temp->next)
	{
		free(temp->str);
		free(temp);
	}
}
