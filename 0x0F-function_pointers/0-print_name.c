
#include "function_pointers.h"
/**
 *@name: string to print.
 *@f: this a function pointer, that recieves a string.

*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}