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

	if (b <= 0)
		return (0);
	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
