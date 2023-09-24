#include "main.h"

/**
 * _strncat - append n bytes of source to destination
 * @dest: destination parameter
 * @src: source parameter
 * @n: number of bytes parameter
 *
 * Return: pointer to destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int k;

	i = 0;
	while (dest[i] != '\0')
		i++;
	k = 0;
	while (src[k] && k < n)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}
