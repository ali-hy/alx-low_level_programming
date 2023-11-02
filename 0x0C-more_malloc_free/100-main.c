#include <stdio.h>
#include "main.h"
#include <stdlib.h>

void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    char *p;
    int i;

    p = malloc(sizeof(char) * 10);
    p = _realloc(p, sizeof(char) * 8, sizeof(char) * 8);
    i = 0;
    while (i < 8)
        p[i++] = 8;

    simple_print_buffer(p, 8);
    free(p);
    return (0);
}
