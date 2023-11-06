#include <stdio.h>
#include "dog.h"

/**
 * nin - nil if null, returns "(nil)" if the string is NULL, or the string if
 * it's not null
 * @s: string
 * Return: (nil) if s is NULL, or s if it's not NULL
 */
char *nin(char *s)
{
	if (s == NULL)
		return ("(nil)");

	return (s);
}

/**
 * print_dog - prints dog struct
 * @d: dog struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\nAge: %.6f\nOwner: %s\n",
			nin(d->name), d->age, nin(d->owner));
}
