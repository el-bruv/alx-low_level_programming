#include "dog.h"
#include <stdio.h>

/**
 * _strcpy - copy a string from source to destination
 * @src: source string parameter
 * @dest: destination parameter
 *
 * Return: pointer to destination string, NULL for otherwise
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	if (src == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

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
	if (doggo == NULL)
		return (NULL);
	doggo->name = _strcpy(doggo->name, name);
	doggo->age = age;
	doggo->owner = _strcpy(doggo->owner, owner);
	if (doggo == NULL)
		return (NULL);
	return (doggo);
}
