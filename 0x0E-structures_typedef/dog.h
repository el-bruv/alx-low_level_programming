#ifndef DOG_H
#define DOG_H

#include <stdlib.h>

/**
 * dog_t - Typedef for struct dog
 */
typedef	struct dog dog_t;

/**
 * struct dog - to hold basic info provided about a dog
 * @name: name of dog parameter
 * @age: age of dog parameter
 * @owner: owner of dog parameter
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void	init_dog(struct dog *d, char *name, float age, char *owner);
void	print_dog(struct dog *d);
dog_t	*new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
