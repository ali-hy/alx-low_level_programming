#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

/**
 * struct dog - pet dog
 * @name: dog's name
 * @age: dog's age
 * @owner: name of dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - dog struct type
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* MAIN_H */
