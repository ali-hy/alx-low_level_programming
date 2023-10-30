#include <stdio.h>
#include "main.h"

/**
 * _strlen - get string length
 * @s: string
 * Return: length of s
 */
int _strlen(char *s)
{
	int i = 0;

	if (s == NULL)
		return (-1);

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * argstostr - concatinate program arguments into a string
 * @ac: argument count
 * @av: argument array
 * Return: pointer to concatinated string
 */
char *argstostr(int ac, char **av)
{
	int total_size = 0, i, j, k = 0;
	char *res;

	if (ac == 0 || av[0] == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		total_size += _strlen(av[i]);
	}

	res = malloc(sizeof(char) * (total_size + ac + 1));
	if (res == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
		{
			res[k] = av[i][j];
		}
		res[k] = '\n';
		k++;
	}

	return (res);
}
