#include "dog.h"

/**
 * init_dog - initialize a struct's elements
 * @d: struct to manipulate parameter
 * @name: name to input parameter
 * @age: age to input parameter
 * @owner: owner to input parameter
 *
 * Return: void so nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
