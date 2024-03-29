#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - A function that initialize a variable of type struct dog.
 * @d: Struct for initializaiton
 * @name: Holds name char array
 * @age: Holds age float value
 * @owner: Holds owner name char array
 * Return: Nothing
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
