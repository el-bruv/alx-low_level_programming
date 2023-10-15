#include "main.h"

/**
 * malloc_checked - allocate memory
 * @b: size parameter
 *
 * Return: pointer to allocated memory, 98 for malloc failure
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL || ptr == 0)
		exit(98);
	return (ptr);
}
