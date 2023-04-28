#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add  a new node at the end of a list_t list
 * @head: A constant double pointer to a structure of type list_t, which represents the beginning of a linked list.
 *@str: A constant pointer to a character array that contains the data to be added to the linked list.
 * Return: List with new node for list_t list, NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{

	unsigned int i;
	list_t *newNode;
	list_t *temp;

	newNode  = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);

	if (newNode == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		;

	if (*head == NULL)
	{
		*head = newNode;
		newNode->len = i;
		newNode->str = strdup(str);
		newNode->next = NULL;
		return newNode;
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = newNode;

	newNode->len = i;
	newNode->str = strdup(str);
	newNode->next = NULL;

	return newNode;

}
