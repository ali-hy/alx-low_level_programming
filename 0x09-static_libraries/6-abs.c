#include <stdio.h>
#include "main.h"

/**
 * _abs - get the absolute value of an integer
 * @n: any valid int
 *
 * Return: the absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
