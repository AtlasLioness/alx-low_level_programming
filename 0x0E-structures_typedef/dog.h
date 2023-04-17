#ifndef STRUCT_DOG
#define STRUCT_DOG

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - holds dog's name, age and owner
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
struct dog *_malloc(struct dog *d);
void print_dog(struct dog *d);

#endif /* STRUCT_DOG */
