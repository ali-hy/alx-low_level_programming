#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: name to print
 * @f: function to use for printing the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;

	f(name);
}
