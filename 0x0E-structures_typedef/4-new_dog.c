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
	for (i = 0; i < namelen; i++)
		new->name[i] = name[i];
	new->name[i] = '\0';
	for (j = 0; j < ownerlen; j++)
		new->owner[j] = owner[j];
	new->owner[j] = '\0';

	new->age = age;
	return (new);
}
