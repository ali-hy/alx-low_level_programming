#include <stdio.h>
#include "main.h"

/**
 * set_string - change the value of a char pointer
 * @s: pointer to char pointer to be changed
 * @to: new value for char pointer
 */
void set_string(char **s, char *to)
{
	*s = to;
}
