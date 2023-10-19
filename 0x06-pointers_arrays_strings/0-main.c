#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

	char s3[] = "Hello ";
	char s4[] = "World!\n";
	char *ptr2;
	
	printf("MY RESULTS:\n");
    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
	
	printf("EXPECTED RESULTS:\n");
    printf("%s\n", s3);
    printf("%s", s4);
    ptr2 = strcat(s3, s4);
    printf("%s", s3);
    printf("%s", s4);
    printf("%s", ptr2);
    
	return (0);
}
