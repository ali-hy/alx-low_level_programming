#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of char: %d byte(s)\n" +
			"Size of int: %d byte(s)\n" +
			"Size of long int: %dbyte(s)\n" +
			"Size of long long int: %dbyte(s)\n" +
			"Size of float: %dbyte(s)\n",
			sizeof(char),
			sizeof(int),
			sizeof(long int),
			sizeof(long long int),
			sizeof(float));
}
