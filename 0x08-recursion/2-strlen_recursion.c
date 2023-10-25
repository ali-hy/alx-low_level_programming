#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - get string length with recursion
 * @s: string to print
 * Return: length of string s
 */
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
