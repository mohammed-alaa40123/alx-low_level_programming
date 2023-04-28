#include <stdlib.h>
#include "lists.h"
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
