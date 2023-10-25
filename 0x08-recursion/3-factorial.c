#include <stdio.h>
#include "main.h"

/**
 * factorial - gets the factorial of a number
 * @n: number to get the factorial of
 * Return: n's factorial
 */
int factorial(int n)
{
	if(n == 0)
		return 1;

	return (n * factorial(n - 1));
}
