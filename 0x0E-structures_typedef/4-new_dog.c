#include <stdio.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: pointer to the new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *namemem;
	char *ownermem;
	int i;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	namemem = malloc(sizeof(name));
	if (namemem == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		namemem[i] = name[i];
	ownermem = malloc(sizeof(owner));
	if (ownermem == NULL)
		return (NULL);
	for (i = 0; owner[i] != '\0'; i++)
		ownermem[i] = owner[i];
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
