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
	int i, namelen = 0, ownerlen = 0;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	new = malloc(sizeof(*new));
	if (new == NULL || !(name) || !(owner))
	{
		free(new);
		return (NULL);
	}

	while (*name++)
		namelen++;
	while (*owner++)
		ownerlen++;
	namemem = malloc((namelen + 1) * sizeof(char));
	ownermem = malloc((ownerlen + 1) * sizeof(char));
	if (namemem == NULL || ownermem == NULL)
	{
		free(namemem);
		free(ownermem);
		free(new);
		return (NULL);
	}
	for (i = 0; i < namelen; i++)
		namemem[i] = name[i];
	namemem[i] = '\0';
	for (i = 0; i < ownerlen; i++)
		ownermem[i] = owner[i];
	ownermem[i] = '\0';

	new->name = namemem;
	new->age = age;
	new->owner = ownermem;
	return (new);
}
