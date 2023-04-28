#include <stdlib.h>
#include "lists.h"
/**
 * list_len - Return the number of elements in a linked list_t
 * list
 * @head: A constant double pointer to a structure of type list_t, which represents the beginning of a linked list.
 * Return: Num of nodes
 */
size_t list_len(const list_t *head)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		head = head->next;
		i++;
	}

	return (i);
}
