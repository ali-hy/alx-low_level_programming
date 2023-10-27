#include <stdio.h>
#include <stdlib.h>

/**
 * digits_only - check if string has digits only
 * @s: string
 * Return: 1 if digits only, 0 if otherwise
 */
int digits_only(char *s)
{
	int i;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (0);
		}
	}

	return (1);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, res = 0;
	
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!digits_only(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		res += atoi(argv[i]);
	}

	printf("%d\n", res);

	return (0);
}
