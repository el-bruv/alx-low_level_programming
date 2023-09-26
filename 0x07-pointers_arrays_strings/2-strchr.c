#include "main.h"

/**
 * _strchr - locate first occurrence of a character in a string
 * @s: string parameter
 * @c: character parameter
 *
 * Return: pointer to character occurrence, NULL for not found
 */
char *_strchr(char *s, char c)
{
	int i;
	
	if (!s)
		return (0);
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
