#include <stdio.h>
#include "main.h"

/**
 * string_nconcat - concat 2 strings
 * @s1: first string
 * @s2: second string
 * @n: max number of bytes from s2 to concatinate
 * Return: ptr to newly allocated memory with s1 followed by the first n bytes
 * s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *res;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;

	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	if (len2 < n)
		n = len2;

	res = malloc(sizeof(char) * (len1 + n + 1));
	if (res == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		res[i] = s1[i];

	j = i;

	for (i = 0; i < n; i++, j++)
		res[j] = s2[i];

	res[j] = '\0';

	return (res);
}
