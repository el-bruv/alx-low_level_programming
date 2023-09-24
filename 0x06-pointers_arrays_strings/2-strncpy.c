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

	i = 0;
	while (dest[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	i = 0;
	while (src[i] != '\0')
		i++;
	if (n > i)
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}
