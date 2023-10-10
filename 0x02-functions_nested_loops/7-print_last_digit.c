#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints last digit in an int
 * @n: any valid int
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		return (-last_digit);
	}
	else
	{
		return (last_digit);
	}
}
