#include "main.h"

/**
 * _strpbrk - search a string for bytes that match any bytes in a substring
 * @s: string parameter
 * @accept: substring parameter
 *
 * Return: pointer to first occurrence of a match, null if no match
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int k;

	i = 0;
	while (s[i])
	{
		for (k = 0; accept[k]; k++)
		{
			if (s[i] == accept[k])
				return (&s[i]);
		}
		i++;
	}
	return (0);
}
