#include <stdio.h>
#include "main.h"

/**
 * strtow - split a string into words
 * @str: strings
 * Return: array of the words from string
 */
char **strtow(char *str)
{
	int i, j, word_start, word, in_word = 0, wc = 0;
	char **res;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			in_word = 0;
		else
		{
			if (!in_word)
			{
				in_word = 1;
				wc++;
			}
		}
	}

	res = malloc(sizeof(char *) * wc);
	if (res == NULL)
	{
		return (NULL);
	}

	for (i = 0, word = 0, j = 0; i != '\0'; word++)
	{
		while (str[i] == ' ')
			i++;
		
		if (str[i] == '\0')
			break;

		word_start = i;

		while (str[i] != ' ' && str[i] != '\0')
			i++;

		word_size = 2 + i - word_start;
		res[word] = malloc(sizeof(char) * word_size);
		if (res[word] == NULL)
		{
			while(word--)
				free(res[word]);

			free(res);
			return (NULL);
		}

		for (j = word_start; j < i; j++)
		{
			res[word][j - word_start] = str[j];
		}
	}

	return (res);
}
