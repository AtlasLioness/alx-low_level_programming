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
	int i, j, namelen = 0, ownerlen = 0;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	new = malloc(sizeof(*new));
	if (new == NULL || !(name) || !(owner))
	{
		free(new);
		return (NULL);
	}

	while (name[namelen] != '\0')
		namelen++;
	while (owner[ownerlen] != '\0')
		ownerlen++;
	new->name = malloc((namelen + 1) * sizeof(char));
	new->owner = malloc((ownerlen + 1) * sizeof(char));
	if (new->name == NULL || new->owner == NULL)
	{
		free(new->name);
		free(new->owner);
		free(new);
		return (NULL);
	}
	namemem = new->name;
	ownermem = new->owner;
	for (i = 0; i < namelen; i++)
		namemem[i] = name[i];
	namemem[i] = '\0';
	for (j = 0; j < ownerlen; j++)
		ownermem[j] = owner[j];
	ownermem[j] = '\0';

	new->age = age;
	return (new);
}
