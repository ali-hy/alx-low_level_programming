#include <stdio.h>
#include "dog.h"

/**
 * init_dog - inits a dog struct
 * @d: dog struct to init
 * @name: name prop
 * @age: age prop
 * @owner: owner prop
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
