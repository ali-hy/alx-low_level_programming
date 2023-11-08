#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - gets a function for an operations represented by a string
 * @s: string that represents an operation
 * Return: function represented by string
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (s && strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
