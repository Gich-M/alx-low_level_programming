#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function to initialize a variable of type struct dog
 * @d: pointer to dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
