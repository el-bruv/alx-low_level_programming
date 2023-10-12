#include "main.h"

/**
 * _strdup - allocate memory for copy of a given string
 * @str: string parameter
 *
 * Return: pointer to copied string, 0 for failure
 */
char *_strdup(char *str)
{
	int i;
	int k;
	char *sc;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	sc = malloc(sizeof(char) * i);
	if (!sc)
		return (0);
	k = 0;
	while (k < i)
	{
		sc[k] = str[k];
		k++;
	}
	sc[k] = '\0';
	return (sc);
}
