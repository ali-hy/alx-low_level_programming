#include <stdio.h>
#include "dog.h"

/**
 * free_dog - free a dog from it's chains, and its jail #end_slavery
 * @d: imprisoned dog, chained to the wall
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
