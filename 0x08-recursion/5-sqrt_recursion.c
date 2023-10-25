#include <stdio.h>
#include "main.h"

/**
 * _sqrt - calculate sqrt of n
 * @target: sqrt
 * @x: attempting
 * Return: natural squre root of n
 */
int _sqrt(int target, int x)
{
	if (x * x == target)
		return x;
	if (x * x > target)
		return -1;

	return (_sqrt(target, x + 1));
}

/**
 * _sqrt_recursion - calculate the natural sqrt of n
 * @n: number under sqrt
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return -1;
	return (_sqrt(n, 0));
}
