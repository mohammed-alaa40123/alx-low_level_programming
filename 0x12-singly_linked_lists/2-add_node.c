#include <stdlib.h>
#include <string.h>
#include "lists.h"
list_t *add_node(list_t **head, const char *str)
{

	unsigned int i;
	list_t *newNode;

	newNode  = malloc(sizeof(list_t *));

	if (str == NULL)
	{
		newNode->str = NULL;
		newNode->len = 0;
		newNode->next = *head;
	}

	if (newNode == NULL)
		return (NULL);

	newNode->next = *head;
	*head = newNode;

	newNode->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	newNode->len = i;

	return newNode;
}
