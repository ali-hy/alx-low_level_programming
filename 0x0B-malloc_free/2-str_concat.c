#include <stdio.h>
#include "main.h"

/**
 * str_concat - concatinate 2 strings together
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatinated string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, size;
	char *res;

	while (s1[i] != '\0')
	{
		i++;
	}

	size = i;

	i = 0;
	while (s2[i] != '\0')
	{
		i++;
	}

	size += i;

	res = malloc(sizeof(char) * (size + 1));
	if (res == NULL)
		return (NULL);

	for (i = 0; i != '\0'; i++, j++)
	{
		res[j] = s1[i];
	}

	for (i = 0; i != '\0'; i++, j++)
	{
		res[j] = s2[i];
	}

	return (res);
}
