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
	return (_abs(n % 10));
}
