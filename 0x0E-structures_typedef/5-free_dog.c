#include <stdio.h>
#include "dog.h"
/**
 * free_dog - frees dogs
 * @d : pointer to dog_t variable
 *
 */
void free_dog(dog_t *d)
{
	char *name, *owner;
	name = d->name;
	owner = d->owner;
	free(name);
	free(owner);
	free(d);
}
