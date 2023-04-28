
#include <stdio.h>
#include "lists.h"

/**
* print_list - Print all the elements of a list_t list
* @head: Const  double pointer to a structure of type list_t, which represents the beginning of a linked list.
* Return: Num of nodes
*/

size_t print_list(const list_t *head)
{
unsigned int i = 0;

while (head != NULL)
{
if (head->str == NULL)
	printf("[0] (nil)\n");

else
	printf("[%d] %s\n", head->len, head->str);

head = head->next;
i++;
}

return i;
}
