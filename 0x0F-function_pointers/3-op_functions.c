#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - add two numbers
 * @a: first number
 * @b: second number
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - add two numbers
 * @a: first number
 * @b: second number
 * Return: difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numbers
 * @a: first number
 * @b: second number
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two numbers
 * @a: first number
 * @b: second number
 * Return: quotient of a over b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - get the modulous two numbers
 * @a: first number
 * @b: second number
 * Return: modulous of a over b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
