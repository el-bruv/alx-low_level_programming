#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print out the contents of a struct
 * @d: stuct parameter
 *
 * Return: void so nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", (d->name == NULL) ? "(nil)" : d->name);
	if (d->age == 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner == NULL) ? "(nil)" : d->owner);
}
