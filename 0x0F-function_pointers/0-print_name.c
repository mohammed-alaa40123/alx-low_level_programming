#include "function_pointers.h"

/**
 * print_name - print name from a function pointer
 * @name: char string
 * @f: function pointer that takes string argument
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
