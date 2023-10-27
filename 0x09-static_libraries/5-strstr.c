#include <stdio.h>
#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle in
 * the string haystack. The terminating null bytes (\0) are not compared
 * @haystack: string to search in
 * @needle: substring to search for
 * Return: pointer to the start of the first occurrence of the substring, or
 * null if the substring isn't found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		while (haystack[i + j] != '\0'
				&& needle[j] != '\0'
				&& haystack[i + j] == needle[j])
			j++;

		if (needle[j] == '\0')
		{
			return (haystack + i);
		}

		i = i + j;
	}

	return (NULL);
}
