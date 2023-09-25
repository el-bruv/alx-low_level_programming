#include "main.h"

/**
 * _memcpy - copy n bytes from source to destination memory area
 * @dest: destination parameter
 * @src: source parameter
 * @n: number of bytes parameter
 *
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
