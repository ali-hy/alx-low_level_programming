#include <stdio.h>
#include "main.h"

/**
 * _strdup - copy an existing string into a dynamic array
 * @str: string
 * Return: pointer to the new string
 */
char *_strdup(char *str)
{
	int i, size = 0;
	char *res;

	if (str == NULL)
		return (NULL);


	while (str[size] != '\0')
	{
		size++;
	}

	res = malloc(sizeof(char) * size);
	if (res == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= size; i++)
	{
		res[i] = str[i];
	}

	return (res);
}
