#include "main.h"

/**
 * _calloc - allocate array memory of # of elements, each being size of size
 * @nmemb: number of elements parameter
 * @size: size of each element parameter
 *
 * Return: pointer to memory allocation, NULL for failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(sizeof(size) * (nmemb + 1));
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
