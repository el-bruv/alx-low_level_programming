#include "dog.h"

/**
 * free_dog - free space allocated to dog object
 * @d: object parameter
 *
 * Return: void so nothing
 */
void free_dog(dog_t *d)
{
	free(d);
}
