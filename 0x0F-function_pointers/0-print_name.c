#include <stdio.h>
#include "function_name.h"

/**
 * print_name - print a name
 * @name: name to print
 * @f: function to use for printing the name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
