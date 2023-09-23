#include "main.h"

/**
 * _strcpy - copy string from source to destination
 * @dest: destination parameter
 * @src: source parameter
 *
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
