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

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
