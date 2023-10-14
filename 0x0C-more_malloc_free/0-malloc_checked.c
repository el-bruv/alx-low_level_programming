#include "main.h"
#include <stdio.h>
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
	if (b % 4 != 0)
		exit(98);
	ptr = malloc(b);
	if (ptr == NULL || ptr == 0)
		exit(98);
	return (ptr);
}
