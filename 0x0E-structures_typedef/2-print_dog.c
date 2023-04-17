#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: pointer to the the struct dog to print
 *
 */
void print_dog(struct dog *d)
{
	if (d)
	{

		printf("Name: ");
		if (d->name)
			printf("%s\n", d->name);
		else
			printf("(nil)\n");
		printf("Age: ");
		if (d->age)
			printf("%f\n", d->age);
		else
			printf("(nil)\n");
		printf("Owner: ");
		if (d->owner)
			printf("%s\n", d->owner);
		else
			printf("(nil)\n");
	}
}
