#include <stdio.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
