#include "dog.h"
#include <stdio.h>

/**
 * _sl - determine the lenght of a string
 * @s: string parameter
 *
 * Return: length of string
 */
int _sl(char *s)
{
	int i;

	if (s == NULL)
		return (0);
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}


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
	if (d->name == NULL || _sl(d->name) == 0)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age <= 0.0f)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL || _sl(d->name) == 0)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
