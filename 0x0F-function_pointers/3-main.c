#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument array
 * Return: 0 on success. 98+ on failure.
 */
int main(int argc, char **argv)
{
	int num1, num2;
	int (*op_f)(int, int);

	if (argc != 4)
	{
		printf("ERROR\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op_f = get_op_func(argv[2]);

	if (op_f == NULL)
	{
		printf("ERROR\n");
		return (99);
	}

	if ((argv[1][0] == '%' || argv[1][0] == '/') && num2 == 0)
	{
		printf("ERROR\n");
		return (100);
	}

	printf("%d\n", op_f(num1, num2));

	return (0);
}
