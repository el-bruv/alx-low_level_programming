#include "main.h"

/**
 * _strncpy - copy n bytes from source to destination
 * @dest: destination parameter
 * @src: source parameter
 * @n: number of bytes parameter
 *
 * Return: pointer t destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int k;

	k = 0;
	while (dest[k])
		k++;
	i = 0;
	while (dest[i] && i < n && i < k)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
