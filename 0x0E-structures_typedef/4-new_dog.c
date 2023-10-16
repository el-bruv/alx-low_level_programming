#include "dog.h"

/**
 * new_dog - create a new struct entry
 * @name: name parameter
 * @age: age parameter
 * @owner: owner parameter
 *
 * Description: create a new dog from the struct dog structure
 * Return: pointer to the new struct, NULL for failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	doggo = malloc(sizeof(dog_t));
	doggo->name = name;
	doggo->age = age;
	doggo->owner = owner;
	return (doggo);
}
