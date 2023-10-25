#include <stdio.h>
#include "main.h"

/**
 * divisible_by - check if n is divisible by any numbers from x to n
 * @n: dividend
 * @x: divider
 * Return: 1 if divisible, reutrn 0 if not divisible
 */
int divisible_by(int n, int x)
{
	if (x * x > n)
		return (0);

	if (n % x == 0)
		return (1);

	return (divisible_by(n, x + 1));
}

/**
 * is_prime_number - check if n is a prime number
 * @n: number to check
 * Return: 1 if prime, return 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (divisible_by(n, 2) == 0 ? 1 : 0);
}
