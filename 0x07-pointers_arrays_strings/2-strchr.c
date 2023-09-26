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

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
