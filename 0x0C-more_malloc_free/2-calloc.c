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
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < (size * nmemb))
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
