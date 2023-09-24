#include "main.h"

/**
 * _strcat - append source to end of destination
 * @dest: destination parameter
 * @src: sorce parameter
 *
 * Return: pointer to appended destination string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int k;

	i = 0;
	while (dest[i] != '\0')
		i++;
	k = 0;
	while (src[k] != '\0')
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}
