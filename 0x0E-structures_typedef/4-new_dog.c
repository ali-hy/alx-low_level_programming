#include <stdio.h>
#include "dog.h"

/**
 * strcp - copy string
 * @str: string to copy
 * Return: copy of string
 */
char *strcp(char *str)
{
	int i = 0, size;
	char *res;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}

	size = i + 1;
	res = malloc(sizeof(char) * size);
	if (res == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		res[i] = str[i];
	}

	res[i] = '\0';

	return (res);
}

/**
 * new_dog - creates a new dog
 * @name: name prop
 * @age: age prop
 * @owner: owner prop
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = strcp(name);
	d->age = age;
	d->owner = strcp(owner);

	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	return (d);
}
